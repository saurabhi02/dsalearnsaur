#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*for finding if the ith bit is zero or one
     perform a left shift on 1 for given number of bit - 1 
     and create a mask

     After that AND the mask and the given value

     if value = 0 bit is zero 
     else it is 1  
    */
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;
    cout<<"Enter bit"<<endl;
    int bit_at;
    cin>>bit_at;

    int mask=1<<bit_at-1;

    int value=mask & n;
    if(value==0)
    cout<<"0";
    else
    cout<<"1";

    return 0;
}
