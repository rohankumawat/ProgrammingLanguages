// This program won't read any WhiteSpace Character...

#include<iostream>
using namespace std;

int main(){
    char st;
    cin >> st;
    int n = 0; // count = 0
    while(st!='$'){
        n++;
        cin >> st;
    }
    cout << n << endl;
    return 0;
}