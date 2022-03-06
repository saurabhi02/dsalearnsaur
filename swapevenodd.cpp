#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n & 0XAAAAAAAAA;
    int b=n & 0X555555555;
    /*
    when we do anding of a number with 0XAAAAAAAA then the bits at odd position wich are set on will be srt off
    Simillarly when we do 0X55555555 then the even position bits which are set on will off 

    EG- (6)10 =(0110)2
    then 6 & 0XAAAAAAAA = 0010 here bit at position 3 was on which was odd so we seted it off
    6 & 0x55555555=0100 here second bit was on which was even we set it off 

    */

    int ans=a>>1 ^ b<<1;
    cout<<ans;



}