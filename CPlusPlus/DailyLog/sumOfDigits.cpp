#include<iostream>
using namespace std;

int main(){
    int i = 1234, sum = 0, n;
    
    // while(i>0)
    
    while(i!=0){
        n = i % 10;
        sum = sum + n;
        i = i/10;
    }

    cout << sum << endl;

    return 0;
}