/*
https://practice.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Bit%20Magic&sortBy=submissions#
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maxi=0;
    int cnt=0;
    while(n>0)
    {
        if((n&1)==0)
        {
            maxi=max(cnt,maxi);
            cnt=0;
        }
        else
        cnt++;
        n=n>>1;

    }
    maxi=max(cnt,maxi);
    cout<<maxi;
}