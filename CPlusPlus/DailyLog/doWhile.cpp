#include <iostream>
using namespace std;

int main(){
    int i = 1;

    cout << "Use of do-while when initialised i = 1: " << endl;

    do{
        i++;
        cout << i << " ";
    } while(i<5);

    cout << endl << "Use of while: " << endl;
    
    i = 1;
    while(i<5){
        cout << i << " ";
        i++;
    }

    cout << endl << "Use of do-while when i = 5: " << endl;

    i=5;
    do{
        i++;
        cout << i << " ";
    } while(i<5);

    cout << endl << "Use of while loop when i = 5: " << endl;
    i = 5;
    while(i<5){
        cout << i << " ";
        i++;
    }

    return 0;
}