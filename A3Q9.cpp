#include<iostream>
using namespace std;

int main()
{
    int n=1000;
    int i,j,k,c=0,a;
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]=1;
        for(j=1;j<n;j++)
        {
            if(arr[j]==1&&j!=1)
            {
                for(k=j;k<n;k++)
                {
                    if(k%j==0&&k!=j)
                    {
                        arr[k]=0;
                    }
                }
            }
        }
    }
    for(a=2;a<n;a++)
    {
        if(arr[a]==1)
        {
            cout<<a<<" is a Prime Number"<<endl;
            c++;
        }
    }
    cout<<"A total of "<<c<<" Prime numbers were found"<<endl;
    return 0;
}
