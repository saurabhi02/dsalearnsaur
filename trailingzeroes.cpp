#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=0;
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    cout<<ans<<endl;

    /*
    for calucllating the trailing zeroes in a factorial count the number of 5 or multiple of 5 
    */
    for(int i=5;i<=n;i*=5)
    {
        res+= n/i;
    }
    cout<<res;

}