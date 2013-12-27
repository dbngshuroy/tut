#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int t,x,y,k,j,d;
    float time;
    cin>>t;
    for (int i=1;i<=t;i++){
        cin>>x>>y>>j>>k;
        d=sqrt(x*x+y*y);
        if(d%j==0)
           time=k*(d/j);
        if(d%j!=0){
           int rem=d%j;
           int rest=d-rem;
           time=k*(d-rest)/j;
           if(rest<2*k)
            time=time+rest;
           if(rest<2*k)
            time=time+2*k;}
    }
         cout<<time;
    return 0;
}
