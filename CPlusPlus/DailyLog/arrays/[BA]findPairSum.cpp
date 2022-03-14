#include<iostream>
using namespace std;

int main(){
    int a[] = {1, 3, 4, 5, 8, 10};
    int n = sizeof(a) / sizeof(int);

    int i = 0, j = n - 1;

    while ( i < j ){
        if(a[i] + a[j] == 11){
            cout << a[i] << " " << a[j] << endl;
            i++;
            j--;
        }
        else if(a[i] + a[j] < 11){
            i++;
        }
        else if(a[i] + a[j] > 11){
            j--;
        }
    }

    return 0;
}