#include<bits/stdc++.h>
using namespace std;


bool checkDuplicate(vector<int>v)
{
    unordered_map<int,int>check;
    for(int num:v)
    {
        if(check.find(num)!=check.end())
        {
            return true;
        }
        check[num]=num;
    }
    return false;
}



int main()
{
    vector<int>v={1,1,1,3,3,4,3,2,4,2};
    if(checkDuplicate)
    {
        cout<<"yes there are duplicates";
    }
    else{
        cout<<"not found any";
    }
}