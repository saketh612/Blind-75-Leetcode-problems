#include<bits/stdc++.h>
using namespace std;



void rotateMatrix(vector<vector<int>>&matrix)
{
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=i+1;j<matrix.size()-1;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<matrix.size();i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
}









int main()
{
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotateMatrix(matrix);
    return 0;
}