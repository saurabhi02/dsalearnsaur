#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
long sum_of_n(int n)
{
    if(n==1)
    return n;

    return n + sum_of_n(n-1);
}
int main()
{
    int n;
    cin>>n;
    int ans=sum_of_n(n);
    cout<<ans;
    return 0;
}