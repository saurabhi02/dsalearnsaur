/*
https://practice.geeksforgeeks.org/problems/game-with-nos3123/1/?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&status[]=unsolved&category[]=Bit%20Magic&sortBy=submissions
*/

#include<bits/stdc++.h>
using namespace std;
int* game(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i]^arr[i+1];
    }
    arr[n-1]=arr[n-1];

    return arr;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    game(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i];



}