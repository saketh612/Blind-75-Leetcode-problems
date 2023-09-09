#include <bits/stdc++.h>
using namespace std;


bool isSafe(int x,int y,int n,vector<vector<int>>visited,vector<vector<int>>maze)
{
    if((x>=0&&x<n)&&(y>=0&&y<n)&&(visited[x][y]==0)&&(maze[x][y]==1))
    {
        return true;
    }
    else
    {
        return false;
    }
}


void solve(vector<vector<int>>maze,int x,int y,vector<vector<int>>visited,int m,int n,vector<vector<char>>&path,vector<char>output)
{

    if(x==n-1&&m==n-1)
    {
        path.push_back(output);
        return;
    }

    //down
    visited[x][y]==1;

    int newx=x+1;
    int newy=y;
    if(isSafe(newx,newy,n,visited,maze))
    {
        output.push_back('D');
        solve(maze,newx,newy,visited,m,n,path,output);
        output.pop_back();
    }

     newx=x;
     newy=y-1;
    if(isSafe(newx,newy,n,visited,maze))
    {
        output.push_back('L');
        solve(maze,newx,newy,visited,m,n,path,output);
        output.pop_back();
    }

    newx=x;
    newy=y+1;
    if(isSafe(newx,newy,n,visited,maze))
    {
        output.push_back('R');
        solve(maze,newx,newy,visited,m,n,path,output);
        output.pop_back();
    }

    newx=x-1;
    newy=y;
    if(isSafe(newx,newy,n,visited,maze))
    {
        output.push_back('D');
        solve(maze,newx,newy,visited,m,n,path,output);
        output.pop_back();
    }

    visited[x][y]==0;   
}






int main() {
    int n; // The dimension of the maze
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));
    vector<vector<int>> visited(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }

    int srcx = 0;
    int srcy = 0;

    vector<vector<char>> path;
    vector<char> output;

    solve(maze, srcx, srcy, visited, n, n, path, output);

    // Print the paths
    for (auto& p : path) {
        for (char dir : p) {
            cout << dir;
        }
        cout << endl;
    }

    return 0;
}