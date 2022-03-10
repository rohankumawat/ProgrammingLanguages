#include<iostream>
using namespace std;

int main(){
    // Local Scope
    int a = 1;
    int x = -100;
    if(a>0){
        int x = 10;
        cout << x << endl; //local variable to if block
    }
    cout << x << endl; // local variable to main block

    return 0;
}