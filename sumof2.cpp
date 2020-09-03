#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tar,i,j;
    cin>>n;
    int arr[n];
    for(i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>tar;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
           if(arr[i]+arr[j]==tar)
           {
               cout<<i<<" "<<j<<endl;
           }
               break;
        }
    }
    return 0;

}