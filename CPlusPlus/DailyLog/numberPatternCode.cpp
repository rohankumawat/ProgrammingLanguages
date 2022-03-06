#include<iostream>
using namespace std;

int main() {
    int i, row, col, n, num;

    cin >> n;
    
    for(row=1; row<=n; row++){
        //Print n-row times spaces
        for(i=1; i<=n-row; i++){
            cout << ' ';
        }

        //Print 2*row-1 times number; starting 1
        num = 1;
        for(i=1; i<=2*row-1; i++){
            cout << num;
            num++;
        }
        
        //Go to the next line
        cout << endl;

        // Wrong approach
        // for(j=1; j<=i; j++){
        //    cout << j;
        // }
    }

    return 0;
}