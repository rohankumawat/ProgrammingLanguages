#include<iostream>
using namespace std;

int main(){
	int arr[5] = {96, 69, 6969, 9696, 6996};
	//print the elements
	cout << "One way to print all the elements" << endl;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	//print the elements (second way)
	cout << "Another way:" << endl;
	int n = 5;
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
