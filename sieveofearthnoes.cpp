#include<bits/stdc++.h>
using namespace std;
void SieveOfEratoshenes(int n,bool arr[])
{
   
    memset(arr,true,n+1);
    arr[0]=false;
    arr[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        for(int j=2*i ;j<=n ;j+=i)
        arr[j]=false;
        
    }
    
   
}

int main()
{
    int n;
    cin>>n;
    bool arr[n+1];
    SieveOfEratoshenes(n,arr);
    for(int i=0;i<n;i++)
    {
    if(arr[i]==1)    
    cout<<i<<" "<<arr[i]<<endl;
    }
   
}
