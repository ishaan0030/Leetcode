#include<bits/stdc++.h>
using namespace std;
int main()
{
    int drw;
    float acc;
    float bal=0.0;
    cin>>drw>>acc;
    if((drw+0.5)>acc)
    {
        cout<<fixed<<setprecision(2)<<acc<<endl;
    }
    
    else
    {
    if(drw%5!=0)
    {
      cout<<fixed<<setprecision(2)<<acc<<endl;  
    }
    else
    {
        bal= acc- drw-0.50;
        cout<<fixed<<setprecision(2)<<bal<<endl;
    }
    
    }
    
    return 0;
}
