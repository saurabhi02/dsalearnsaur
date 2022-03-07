/*

https://practice.geeksforgeeks.org/problems/even-subsets/1

*/

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n+1];
    //a[0]=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    ll Psize=pow(2,n);
    int sum=0;
    int cnt=0;
    for(int i=0;i<Psize;i++)
    {
         for(int j=0;j<n;j++)
        {
           if((i & (1<<j))==0)
           sum+=a[j];
            
        }
        if(sum % 2==0 && sum!=0 )
        cnt++;
        sum=0;

    }

   cout<<cnt;
     
}