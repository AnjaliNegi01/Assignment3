#include<iostream>
#include<cmath>
using namespace std;
inline double sphereVolume(double radius)
{
    return ((4.0/3.0)*3.14159*pow(radius,3));
}
int main()
{
    double radius;
    cout<<"Enter radius of the Sphere: ";
    cin>>radius;
    cout<<"The volume of sphere is: "<<sphereVolume(radius)<<endl;
    return 0;
}
