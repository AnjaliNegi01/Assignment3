#include<iostream>
using namespace std;
int main(){
int n=500;
int i,j,k;
i=0;
j=0;
k=0;
for(i=1;i<=n;i++)
    {
        if((i*i)+(j*j)==(k*k))
        {
            cout<<i<<", "<<j<<", "<<k<<endl;
        }
    for(j=1;j<=n;j++)
    {
     if((i*i)+(j*j)==(k*k))
        {
            cout<<i<<", "<<j<<", "<<k<<endl;
        }
            for(k=1;k<=n;k++)
            {
                if((i*i)+(j*j)==(k*k))
        {
            cout<<i<<", "<<j<<", "<<k<<endl;
        }
            }
    }
    }
    return 0;
}
