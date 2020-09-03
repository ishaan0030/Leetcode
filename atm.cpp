#include<bits/stdc++.h>
using namespace std;
int main()
{
    int draw;
    float acc;
    float bal=0.0;
    cin>>draw>>acc;
    if((draw+0.5)>acc)
    {
        cout<<fixed<<setprecision(2)<<acc<<endl;
    }
    
    else
    {
    if(draw%5!=0)
    {
      cout<<fixed<<setprecision(2)<<acc<<endl;  
    }
    else
    {
        bal= acc- draw-0.50;
        cout<<fixed<<setprecision(2)<<bal<<endl;
    }
    
    }
    
    return 0;
}