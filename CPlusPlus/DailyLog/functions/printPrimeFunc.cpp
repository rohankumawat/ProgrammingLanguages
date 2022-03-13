#include<iostream>
using namespace std;

void PrintPrimes(int n){
    int i, no;
    for(no=2; no<=n; no++){
        //Check if the no is prime
        for(i=2; i<=no; i++){
            if(no%i == 0){
                break; // takes us out of the innermost loop
            }
        }
        if(i==no){
            cout << no << ' '; // print the no bcoz it is prime
        }
        // if prime print it else ignore it
    }
}

int main(){
    int n;
    cout << "Enter a number: "; 
    cin >> n;
    PrintPrimes(n);

    cout << endl;
    return 0;
}