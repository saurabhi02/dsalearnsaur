//calcullate the number of bits require to connvert a to b
#include<bits/stdc++.h>
using namespace std;
int main()
{

    /*
    to convert from a to b 
    first create mask by doing xor of a and b
    then count the bits;
    */

   /* For counting bits take a while loop and check if mask created is odd or not if odd incremt cout
   and do left shift of mask till it is zero  */

   int a,b;
   cin>>a>>b;
   int cnt=0; 
   int mask=a ^ b;
   while(mask>0)
   {
       if((mask & 1)==1)
       cnt++;
       mask=mask>>1;
   }

   cout<<cnt;
}