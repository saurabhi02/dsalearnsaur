#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    /* For checking only unqiue digit in array if we xor all element in array
    and every element is repeated exactly twice then the only value that will be in 
    res will the digit which is not repeated twice
    */

    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res ^ a[i];

    }

    cout<<res;

}