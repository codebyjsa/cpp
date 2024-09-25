#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Upper part
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";  // Print leading spaces
        }
        cout << "*";  // Print the first star
        if (i != 0){
            for(int j=0; j<2*i-1; j++){
                cout << " ";  // Print spaces between stars
            }
            cout << "*";  // Print the second star
        }
        cout << endl;
    }

    // Lower part
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";  // Print leading spaces
        }
        cout << "*";  // Print the first star
        if(i != n-1){
            for(int j=0; j<2*(n-i-1)-1; j++){
                cout << " ";  // Print spaces between stars
            }
            cout << "*";  // Print the second star
        }
        cout << endl;
    }

    return 0;
}
