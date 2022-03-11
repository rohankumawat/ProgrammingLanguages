#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 7;

    cout << "AND OPERATOR" << endl;
    cout << "a & b: " << (a&b) << endl;
    cout << "8 & 5: " << (8&5) << endl;

    cout << "OR OPERATOR" << endl;
    cout << "a | b: " << (a|b) << endl;
    cout << "8 | 5: " << (8|5) << endl;

    cout << "XOR OPERATOR" << endl;
    cout << "a ^ b: " << (a^b) << endl;
    cout << "8 ^ 5: " << (8^5) << endl;

    int x = 1;
    cout << "x: " << endl;
    cout << "LEFT SHIFT OPERATOR" << endl;
    cout << "x(by 1 bit): " << (x<<1) << endl;
    cout << "x(by 3 bits): " << (x<<3) << endl;

    int y = 8;
    cout << "y: " << endl;
    cout << "RIGHT SHIFT OPERATOR" << endl;
    cout << "y(by 1 bit): " << (y<<1) << endl;
    cout << "y(by 3 bits): " << (y<<3) << endl;
}