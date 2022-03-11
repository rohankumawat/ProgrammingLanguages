#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x; // How many numbers do you want?
    // int i = 1;
    int no; // To input the numbers!
    int ans = 0; // To store our XOR results

    // using while looop
    // while(i <= x){
    //    cin >> no;
        // ans = no ^ i; Made a mistake here... It is XORing with i, but not with ans
    //     ans = no ^ ans;
    //    i++;
    // }

    // using for loop 
    for(int i = 1; i <= x; i++){
        cin >> no;
        ans = no ^ ans;
    }

    cout << "The unique number is: " << ans << endl;
    return 0;
}