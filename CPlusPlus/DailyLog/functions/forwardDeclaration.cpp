#include<iostream>
using namespace std;

// Forward Declaration
int Multiply(int, int);

int main(){
    int a= 10, b= 100;

    cout << Multiply(a,b) << endl;
}

int Multiply(int a, int b){
    return a*b;
}