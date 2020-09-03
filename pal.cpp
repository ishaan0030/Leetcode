#include<bits/stdc++.h>
using namespace std;
bool isPal(int);
int main()
{
    int n;
    cin>>n;
   bool res= isPal(n);
   if(res==true)
   {
       cout<<"Palindrome Number"<<endl;
   }
   else
   {
       cout<<"Not Palindrome"<<endl;

   }
   return 0;
   
}
bool isPal(int x)
{
    long long c=x, a,rev=0;
    while(c!=0)
    {
        a= c%10;
        rev= rev*10+a;
        c=c/10;
    }
        if(rev==x)
        {
            return true; 
        }
        else
        {
            return false;
        }
        
}