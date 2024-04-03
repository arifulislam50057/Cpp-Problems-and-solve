#include<bits/stdc++.h>
using namespace std;
int main(){
    float a ,b;
    cin >> a >>b;
    float sum, mul, div, subtr;
    sum = a + b;
    cout <<"a+b: "<< fixed << setprecision(3) << sum <<endl;
    mul=a*b;
    cout <<"a*b: "<< fixed << setprecision(3) << mul <<endl;
    div=a/b;
    cout <<"a/b: "<< fixed << setprecision(3) << div <<endl;
    subtr=a-b;
    cout <<"a-b: "<< fixed << setprecision(3) << subtr <<endl;
    
    return 0;
}