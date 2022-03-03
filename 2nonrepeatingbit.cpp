//IN an array find two non repeating elements
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int res=0;
    int x=0,y=0;
    /*
    for finding two non repating number do xor of all the element in array 
    Then find the righmost set on bit for doing shw 
    DO 2's compliment of the number and perform anding with the original 
    number (i.e obtained in step by doing xor)

    after that run a loop n time and check if the array elemet and 
    the rightmost set bit =0 or 1 
    if 0 add do xor of that element and store in a
    if 1 do xor of that element and stor in b;
    
    */
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        res=res^a[i];
    }
    int bit=res & ~(res-1);
    
    for(int i=0;i<n;i++)
    {
        if((a[i]&bit)==0)
        x=x^a[i];
        else
        y=y^a[i];
    }

    cout<<x<<" "<<y;

    



}