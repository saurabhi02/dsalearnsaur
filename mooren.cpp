//Moore majority element in n time complexity and n space somplexity 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int majaority(int a[],int n)
{
    
    int maxn=n/2;
    int ans=a[0],ans1=0;
    int cnt=1;
    
    for(int i=1;i<n;i++)
    {
        
        if(a[i]==a[i-1])
        cnt++;
        else
        cnt--;
        if(cnt=0)
        {
            ans=a[i];
            cnt=1;
        }
    }
    
    
    cnt=0 ;
    for(int i=0;i<n;i++)
    {
        if(a[i]==ans)
        cnt++;
    }
    
    if(cnt>maxn)
    return ans;

    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=majaority(a,n);
    cout<<ans;
    return 0;
}