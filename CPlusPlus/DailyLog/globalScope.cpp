#include<iostream>
using namespace std;
int x = -100; // Global Scope

int main(){
    cout << "Global: " << x << endl;

    // Local Scope
    int a = 1;
    int x = 1;

    if(a>0){
        int x = 10;
        cout << "if block (local scope): " << x << endl; //local variable to if block
        cout << "global scope (from inside if): " << (::x) << endl;

    }
    cout << x << endl; // local variable to main block

    return 0;
}