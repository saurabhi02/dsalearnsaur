/* 
https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1/?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Bit%20Magic&sortBy=submissions
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
  //  int ans=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
       int a1=0,b=0;
    for(int i=1;i<=n;i++)
        a1=a1^i;
    for(int i=0;i<n-1;i++)
        b=b^ a[i];
        
    int ans=a1^b;
        //return ans;

    cout<<ans;
}