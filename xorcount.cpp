/*
https://practice.geeksforgeeks.org/problems/counts-zeros-xor-pairs0349/1/?page=2&difficulty[]=0&category[]=Bit%20Magic&sortBy=submissions#
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ans=0;
    sort(a,a+n);

    int cnt=0;
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
           // cnt=i-m;
            cnt++;
            
        }   
        else{
            cnt++;
            ans+=(cnt *(cnt-1))/2;
            cnt=0;
            m=i;
        }
    }
   

    cout<<ans;
    
}