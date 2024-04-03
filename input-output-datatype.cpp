//1.Write a program to perform input/output of all basic data types.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    float f;
    double d;
    char c;
    string s;
    bool b;
    cin>>i>>f>>d>>c>>s>>b;
    cout<<i<<endl;
    cout<<fixed<<setprecision(3)<<f<<endl;
    cout<<fixed<<setprecision(9)<< d<<endl;
    cout<<c<<endl<<s<<endl<<b<<endl;
    return 0;
}

//2.Write a program to enter two float numbers and find their sum (4 decimal point)
#include<bits/stdc++.h>
using namespace std;
int main(){
    float a , b;
    cin >>a >>b;
    cout<< "the sum is:"<<ends;
    cout<<fixed<<setprecision(4)<< a+b <<endl;
    return 0;
}

//3.Write a program to enter two numbers and perform all arithmetic operations.
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

//4.Write a program to enter the length and width of a rectangle and find its area and perimeter
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









