#include<iostream>
#include<iomanip>
using namespace std;
double calculateCharge(double);
int main()
{
    int count=1;
    double num;
    while(count<=3)
    {
        cout<<"Enter hours parked: ";
        cin>>num;
        cout<<setw(5)<<"Customer Name"<<setw(10)<<"Hours"<<setw(15)<<"Charge\n";
        cout<<setw(5)<<"Car "<<count<<setw(14)<<num<<setw(16)<<fixed<<setprecision(2)<<calculateCharge(num)<<endl;
        count=count+1;
    }
    return 0;
}

double calculateCharge(double x)
{
    double charge;
    if(x<=3)
        charge=2;
    else if(x>19)
        charge=10;
    else if(x>3)
        charge=2+(x-3)*0.5;
    return charge;
}

