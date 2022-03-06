#include<iostream>
using namespace std;

int main(){
    int i, n, num;
    cin >> num;

    for(n = 2; n<=num; n++){
        // Check if the number is prime
        for(i=2; i<n; i++){
            if(n%i == 0) break;
        }
        if(i==n) cout << n << " ";
        // if not prime, then ignore it!
    }
}