#include<iostream>
using namespace std;

bool isprime(int n){
    if (n<=1)
    {
        return false;
    }
    else
    {
        for(int i=2; i<n; i++){
            if (i%n==0)
            {
                return false;
            }
            
        }
    }
    
    return true; 
    
}

int main(){
    int n;
    cout<<"Write a number:";
    cin>>n;

    if (isprime(n))
    {
        cout<<"It is prime number!"<<endl;
    }
    else
    {
        cout<<"Not a prime number"<<endl;
    }
    
    
}