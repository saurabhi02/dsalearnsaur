#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void bincon(int n)
{
    while(n>0)
    {
        cout<<n%2;
        n=n>>1;
    }
}


void deccon(int n){
    int ans=0;
    int cnt=0;
    while(n>0)
    {
        int rem=n%10;
        if(rem==1)
        {
            ans+=pow(2,cnt);
        }
        cnt++;
        n=n/10;
    }
    cout<<ans;
}

int main()
{
    int n;
    cin>>n;
    bincon(n);
    cout<<endl;
    int m;
    cin>>m;
    deccon(m);
    return 0;
}