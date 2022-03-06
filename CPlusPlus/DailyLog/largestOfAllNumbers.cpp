#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    int largest = INT_MIN; //INT_MIN = -2^31
    int no;

    while(i <= n){
        cin >> no;
        if(largest<no){
            largest = no;
        }
        i++;
    }
    
    cout << "The largest number is: " << largest;
    cout << endl;

    return 0;
}
