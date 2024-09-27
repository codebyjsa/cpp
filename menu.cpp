// Create a menu driven program in cpp that perform operations like calculate the sum of numbers, difference of number, calculate the product of number, calculate the division of numbers

#include <iostream>
using namespace std;

int main(){

    int choice;
    cout<<"Welcome to the menu driven program. Here are your options: \n"
        <<"1. Sum of two numbers.\n"
        <<"2. Difference of numbers.\n"
        <<"3. Product of two numbers.\n"
        <<"4. Division of numbers."<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:
        int a, b;
        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        cout<<"The sum of two numbers is "<<(a+b);
        break;

    case 2:
        int d, e;
        cout<<"Enter first number: ";
        cin>>d;
        cout<<"Enter second number: ";
        cin>>e;
        cout<<"The difference of two numbers is "<<(d-e);
        break;

    case 3:
        int g, h;
        cout<<"Enter first number: ";
        cin>>g;
        cout<<"Enter second number: ";
        cin>>h;
        cout<<"The product of two numbers is "<<(g*h);
        break;

    case 4:
        float j, k;
        cout<<"Enter first number: ";
        cin>>j;
        cout<<"Enter second number: ";
        cin>>k;
        if(k == 0){
            cout<<"Division by zero is not allowed!";
        }
        else{
            cout<<"The division of two numbers is "<<(j/k);
        }
        break;
    
    default:
        cout<<"Wrong input";
        break;
    }

    return 0;
}
