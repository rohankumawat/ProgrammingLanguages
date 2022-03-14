#include<iostream>
using namespace std;

void GenerateSubArrays(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <=j; k++){
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}

int main(){
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(int);

    GenerateSubArrays(a, n);

    return 0;
}