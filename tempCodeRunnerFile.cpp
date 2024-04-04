#include<bits/stdc++.h>
using namespace std;
int main(){
    float tempCelcius , tempFahrenheit;
    cin>>tempCelcius;
    tempFahrenheit=((1.8)*(tempCelcius))+32;
    cout<<fixed<<setprecision(3)<<tempFahrenheit<<endl;     
    return 0;
}