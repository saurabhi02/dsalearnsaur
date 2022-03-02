//clearing a bit That is if bit is 1 set it to 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    For setting a bit to on 
    by leftshifting of 1 and inverting it create a mask
    and then perform AND operation on mask and n 


    */
    int n;
    cout<<"Enter the number";
    cin>>n;

    int bits;
    cout<<"Enter the position of bit to clear";
    cin>>bits;

    int mask=~(1<<bits-1);

    int value=mask & n;
    cout<<value;
    

}