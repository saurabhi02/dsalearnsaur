/*
https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1/?page=1&difficulty[]=1&category[]=Bit%20Magic&sortBy=submissions#

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
n++;
        int ans = n/2;
        int powOf2 = 2;
        while(powOf2 <= n){
            int tot = n / powOf2;
            ans = ans + (tot/2)*powOf2;
            if((tot&1)==1){
                ans = ans + n%powOf2;
            }
            powOf2 = powOf2*2;
        }

cout<<ans;
}

/*
Explanation of Soloution 

N=4
then at line we increment n by one it become 5

then ans at line 9 store 2 as 5/2 =2
and powe =2
we will run a loop till p <= n

first time tot value will be 2 
ans=2 + (5 / 2)*2=4

tot & 1 is not equal to 1 so we won't go inside of loop 
in next step powe = p * 2
it is 4 now
then tot = 5/4 = 1
ans= 4 + (1/4)*2
ans=4
tot & 1 == 1 valid as tot is 0001 
ans= 4 + (5/4)=5
and pow = 8 which will end the loop 


*/