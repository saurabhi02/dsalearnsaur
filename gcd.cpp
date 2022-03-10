#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int gcd(int a,int b)
{
   if(b==0)
   return a;
   return  gcd(b,a%b);
}

int main()
{
    int n,m;
    cin>>n>>m;
    int ans=gcd(n,m);
    cout<<ans;
    return 0;
}