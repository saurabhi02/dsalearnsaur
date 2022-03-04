//https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1/?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&status[]=unsolved&category[]=Bit%20Magic&sortBy=submissions#

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int count=0;
    int i=0;
    while(n>0)
    {
         cnt++;
        if((n&1)==1)
        {
           // cnt++;
            count++;
            i=cnt;
        }
       
        n=n>>1;
    }
    if (count == 1)
    cout<<i;
    else
    cout<<"-1";
}