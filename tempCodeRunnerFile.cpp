#include<bits/stdc++.h>
using namespace std;
int main(){
    float length , width , area, perimeter;
    cout<<"enter the length: ";
    cin>>length;
    cout<<"enter the width: ";
    cin>>width;
    area= length*width;
    perimeter= 2*(length+width);
    cout<<"area: "<<fixed<<setprecision(4)<<area<<endl;
    cout<<"perimeter: "<< fixed<<setprecision(4)<<perimeter<< endl;
    return 0;
}