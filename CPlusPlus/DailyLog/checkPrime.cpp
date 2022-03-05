#include<iostream>
using namespace std;

int main(){
    int n = 2, m, i=0;
    cin >> m;

    while(n < m){
        if(m%n==0){
            cout << "The no is not prime." << endl;
            break;
        }
        n++;
        // cout << "The no is prime." << endl;
    }

    if(i==n){
        cout << "The no is prime." << endl;
    }
}