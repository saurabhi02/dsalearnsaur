#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;
const int maxSize=100000;
vector<ll> isprime(maxSize,true);
vector<ll> sfs(maxSize);
vector<ll > prime;
ll cnt=0;
void sieveOfearthones1(ll n)
{
    isprime[0]=false;
    isprime[1]=false;
    for(ll i=2;i<=n;i++)
    {
       
   
        if(isprime[i]==1)
        {
            
            prime.push_back(i);
            sfs[i]=i;
        }
            //cout<<sfs[i]<<" s"<<i<<endl;
         for (ll j=0; j < prime.size() && prime[j] <= sfs[i] && i*prime[j] <= n; ++j) 
        {
          
            isprime[i* prime[j]]=false;
            sfs[i*prime[j]]=prime[j];
        }
    }

}


int main()
{
    ll n;
    cin>>n;
    
    sieveOfearthones1(n);
    
    for(ll i=0;i<prime.size();i++)
    cout<<prime[i]<<" ";
    cout<<endl;
   
    

} 

//time complexity n + something 
//space complexity n