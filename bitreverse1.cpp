#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=0;
    long long int res=0;
    while(n)
    {
        res+=n%2 *pow(2,31-i);
        i++;
        n/=2;

    }
    cout<<res;
}