#include<iostream>
using namespace std;

int main(){
    int a[3][3] = {
        {1, 2, 4},
        {5, 10},
        {69}
    };

    int n = 3, m = 3;

    // let's print our array ...

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    };

    return 0;
}