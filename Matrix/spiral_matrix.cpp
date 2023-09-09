#include <bits/stdc++.h>
using namespace std;



vector<int>spiralMatrix(vector<vector<int>>matrix)
{
    vector<int>output;
    int rows = matrix.size();
    int columns = matrix[0].size();

    int left=0;
    int up=0;
    int right = columns-1;
    int down = rows-1;

    while(up<=down && left<=right)
    {
        for(int i=left;i<right;i++)
        {
            output.push_back(matrix[up][i]);
        }
        up++;

        for(int i=up;i<down;i++)
        {
            output.push_back(matrix[i][right]);
        }
        right--;

        if(up<=down)
        {
        for(int i=right;i>=left;i--)
        {
            output.push_back(matrix[down][i]);
        }
        down--;
        }
       
        if(left<=right)
        {
        for(int i=down;i>=up;i--)
        {
            output.push_back(matrix[i][left]);
        }
        left++;
        }
        

    }

    return output;
}








int main()
{
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int>spiral;
    spiral = spiralMatrix(matrix);
    return 0;
}