// Set the bit of the number to on if off 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    for setting on a bit in a number first left shift
    1 till the required bits and generate mask
    Now or the mask and n 
    and we will get the number with bit on 
    
    */

    int n;
    cout<<"Enter the number";
    cin>>n;

    int bit;
    cout<<"Enter the position to set on bit";
    cin>>bit;

    int mask=1<<bit-1;
    int value=mask | n;

    cout<<value;


}