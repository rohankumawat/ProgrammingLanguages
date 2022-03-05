#include<iostream>
using namespace std;

int main(){
    int i = 2, n;
    cin >> n;

    // while(i<=n){
    //     cout << i << " ";
    //    i = i + 2;
    // }

    i = 1;
    while(i<=n){
        if(i%2==0){
            cout << i << " ";
        }
        i++;
    }

    return 0;
}