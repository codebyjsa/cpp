// Create a program to find out greatest among three numbers

#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3;
    cin>>num1>>num2>>num3;

    if (num1>num2 && num1>num3)
    {
        cout<<"The greates number is: "<<num1;
    }
    else if(num1>num2 && num1<num3){
        cout<<"The greatest number is: "<<num3;
    }
    else if (num1<num2 && num2>num3)
    {
        cout<<"The greatest number is: "<<num2;
    }
    else
    {
        cout<<"The greatest number is: "<<num3;
    }
    
    
    

    return 0;
}