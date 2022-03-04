#include<iostream>
#include<climits>
using namespace std;

int main() {
	int arr[] = {3, 45, 67, 69, 5, 0, 2};
	int max = INT_MIN;
	
	for(int i = 0; i < 7; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	cout << "The greatest number in this array is: " << max << endl;
	return 0;
}
