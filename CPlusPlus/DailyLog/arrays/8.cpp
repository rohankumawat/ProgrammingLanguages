#include<bits/stdc++.h>
using namespace std;


bool compare(int a, int b){
    return a > b;              // to sort in a descending order
}

//inbuilt sort


int main(){
    int a[] = {1, 2, 4, 6, 7, 7, 6, 5};
    int n = sizeof(a) / sizeof(int);

    sort(a, a + n, compare);          // we are not calling the function here... we are just passing it as a parameter

    for(int i = 0; i< n; i++){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}