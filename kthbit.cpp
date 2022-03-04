/*
https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1/?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&status[]=unsolved&category[]=Bit%20Magic&sortBy=submissions#
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int mask = 1<<k;
    
    int ans=mask & n;
    if(ans==0)
    cout<<"NO";
    else
    cout<<"Yes";
}