#include<iostream>
using namespace std;

int main(){
    int a =10;
    int b = a;
    int c = b;
    
    b++;
    c++;

    cout << "Printing out variables after b and c are increased by 1: " << endl;
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
    
    c--;

    cout << "Printing out variables after c is decreased by 1: " << endl;
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
    return 0;
}