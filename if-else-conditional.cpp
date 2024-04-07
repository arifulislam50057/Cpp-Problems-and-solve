//1.Write a program to find the maximum between three numbers using conditional operator.
#include<bits/stdc++.h>
using namespace std;
int main(){
    float a, b, c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"the biggest number is: "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"the biggest number is: "<<b<<endl;
    }
    /*else if(c>a && c>b){
        cout<<"the biggest number is: "<<c<<endl;
    }*/
    else{
        cout<<"the biggest number is: "<<c<<endl;
    }
    return 0;
}

//3.Write a program to check whether a character is an alphabet or not using conditional operator
#include<bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x>='a' && x<='z'){
        cout<<"lower case alphabet";
    }
    else if(x>='A' && x<='Z'){
        cout<<"upper case alphabet";
    }
    else{
        cout<<"not an alphabet character";
    }
    return 0;
}

//Write a program to check whether the year is leap year or not using conditional operator.
/*
Every year that is exactly divisible by four is a leap year, except for years that are exactly divisible by 100, but these centurial years are leap years if they are exactly divisible by 400. For example, the years 1700, 1800, and 1900 are not leap years, but the years 1600 and 2000 are
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin>>year;
    if(year%4==0 && year%100 != 0 || year%400==0){
        cout<<"leap-year";
    } else{
        cout<<"not a leap year";
    }
    return 0;
}

//Write a program to input any alphabet and check whether it is vowel or consonant.
#include<bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin>> x;
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
        cout<<"vowel";
    } else{
        cout<<"consonant";
    }
    return 0;
}

