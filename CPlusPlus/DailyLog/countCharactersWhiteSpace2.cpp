// This program won't read any WhiteSpace Character...

#include<iostream>
using namespace std;

int main(){
    char st;
    cin.get(st);
    int n = 0; // count = 0
    while(st!='$'){
        n++;
        cin.get(st);
    }
    cout << "Total Characters: " << n << endl;
    return 0;
}