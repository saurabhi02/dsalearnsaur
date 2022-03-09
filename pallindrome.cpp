#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=0,rem=0;
    int m=n;
    /*
    to check if it is pallindrome reverse the nuber 
    */
    while(n!=0)
    {
        rem=n%10;
        res=rem + res*10;
        n/=10;

     }
     if(m==res)
     cout<<"YES";
     else
     cout<<"NO";
    return 0;
}