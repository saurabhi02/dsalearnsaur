//Moore majority element in n time complexity and n space somplexity 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int majaority(int arr[],int n)
{
    
    int maxn=n/2;
    int ans=0,ans1=-1;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;

    }
    for(auto i:mp)
    {
        if(i.second>maxn && i.second>ans)
        {
            ans=i.second;
            ans1=i.first;
        }
    }
    return ans1;

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