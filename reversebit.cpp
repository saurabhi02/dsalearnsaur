
/*
https://practice.geeksforgeeks.org/problems/reverse-bits3556/1/?page=2&difficulty[]=0&category[]=Bit%20Magic&sortBy=submissions#

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=3;
    string str="";
    while(n>0)
    {
        if((n&1)==1)
        str='1'+str;

        else
        str='0'+str;

        n=n>>1;

    }
   while(str.length()!=32)
    {
        str='0'+str;
    } 
   
    reverse(str.begin(),str.end());
    long long int num=0,i=0,ans=0,k=31;
    int l=str.length();
     while(l!=0)
     {
        
         if(str[i]=='1')
         {
         char s=str[i]; 
         
         ans+=pow(2,k);
        // k++;
         }
         i++;
         k--;
         l--;
         
     }
    
         cout<<ans;
    
}