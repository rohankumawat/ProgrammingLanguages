#include<iostream>
using namespace std;

int main() {
    int a[] = {1, 3, 4, 5, 8, 10};
    int n = sizeof(a) / sizeof(int);

    for(int i = 0; i <= n; i++){
        int sum = 0;
        for(int j = i+1; j<= n; j++){
            sum = a[i] + a[j];
            if(sum==11){
                cout << a[i] << " and " << a[j] << endl;
            }
        }
    }
    return 0;
}