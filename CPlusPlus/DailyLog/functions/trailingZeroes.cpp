#include<iostream>
using namespace std;

int TrailingZeroes(int n){
    int ans = 0;
    for(int D = 5; n/D >= 1; D *= 5){
        ans += n/D;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    cout << TrailingZeroes(n) << endl;

    return 0;
}