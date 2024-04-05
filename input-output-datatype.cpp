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

//5.Write a program to enter the radius of a circle and find its diameter, circumference and area.
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

//6.Write a program to enter temperature in Celsius and convert it into Fahrenheit.
#include<bits/stdc++.h>
using namespace std;
int main(){
    float tempCelcius , tempFahrenheit;
    cin>>tempCelcius;
    tempFahrenheit=((1.8)*(tempCelcius))+32;
    cout<<fixed<<setprecision(3)<<tempFahrenheit<<endl;     
    return 0;
}

//7.Write a program to convert days into years, weeks and days.
#include<bits/stdc++.h>
using namespace std;
int main(){
    float day , week , month, year;
    cin>> day;
    week = day/7;
    month = day/30;
    year = day/ 365;
    cout<<"week: "<<fixed<<setprecision(1)<<week<<endl;
    cout<<"months: "<<fixed<<setprecision(1)<<month<<endl;
    cout<<"years: "<<fixed<<setprecision(1)<<year<<endl;
    return 0;
}

//Write a program to enter any number and calculate its square root.
#include<bits/stdc++.h>
using namespace std;
int main(){
    float a;
    cin>>a;
    a= sqrt(a);
    cout<<a<<endl;
    return 0;
}

//Write a program to find out the ascii value of a character
#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    int ascii_a;
    cin>>a;
    ascii_a= int(a);
    cout<<ascii_a<<endl;
    return 0;
}







