#include<bits/stdc++.h>
using namespace std;
int main(){
    float r , d, c, a;
    cout<<"enter the radius: ";
    cin >> r;
    d= 2*r;
    cout<<"diameter: "<<fixed<< setprecision(4)<<d<<endl;
    c=2* M_PI * r;
    cout << "circumference: "<<fixed<< setprecision(4)<<c<<endl;
    a=M_PI * pow(r,2);
    cout<<"area: "<<fixed<< setprecision(4)<<a<<endl;
    return 0;

}