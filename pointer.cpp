#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]= { 36, 47, 65, 32, 50};
    int *q;
    int *q1;
    q= a;
    q1= &a[2];
    int q2= *(a+1);
    int q3= *a+1;
    cout<<q<<endl;
    cout<<*q1<<endl;
    cout<<++q<<endl;
    cout<<(&a+1)<<endl;
    cout<<q2<<endl;
    cout<<q3;
    return 0;
}