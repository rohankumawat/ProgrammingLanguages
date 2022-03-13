#include<iostream>
using namespace std;

int fibonacci(int n){
    // int a = 0, b = 1, ans, i;
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        int a = 0, b = 1,c ;
        for(int i = 1; i <= n-2; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
    // while(i <= n){
    //    ans = a + b;
    //    a = b;
    //     b = ans;
    //    i++;
    // }
    // return ans;
}

int main(){
    int n;
    cin >> n;

    cout << fibonacci(n) << endl;
    return 0;
}