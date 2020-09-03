#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num, i, pos;
    cin>>n;
    cin>>pos;
    cin>>num;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before insertion"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=n; i>=pos; i--)
    {
        arr[i]= arr[i-1];
    }
    cout<<endl;
    arr[pos-1]= num;
    n++;
    cout<<"Array after insertion"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}