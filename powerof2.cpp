/*
https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1/?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Bit%20Magic&sortBy=submissions#
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    while(n!=0)
    {
        cnt++;
        n=n & (n-1);
    }

    if(cnt==1)
    cout<<"Yes";
    else
    cout<<"No";
}