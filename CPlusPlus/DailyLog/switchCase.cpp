#include <iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;
    // N: North; S:South; E:East; W:West

    switch(ch){
        case 'N':
            cout << "North" << endl;
        case 'S':
            cout << "South" << endl;
        case 'E':
            cout << "East" << endl;
        case 'W':
            cout << "West" << endl;
        default:
            cout << "INVALID INPUT" << endl;
    }

    return 0;
}