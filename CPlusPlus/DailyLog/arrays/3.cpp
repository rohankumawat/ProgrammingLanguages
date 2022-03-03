#include<iostream>
using namespace std;

int main(){
	int arr[100];
	int i, n;
	
	cout << "Enter the number of elements you want to input:";
	cin >> n;
	
	for(i = 0; i < n; i++){
		cin >> arr[i];
	}
	cout << "Your array is: ";
	
	for(i = 0; i < n; i++){
		cout << arr[i];
	}
	cout << endl;
	
	int key;
	cout << "Enter the element that you want to search! ";
	cin >> key;
	
	for(i = 0; i < n; i++){
		if(arr[i] == key){
			cout << "Key found at index " << i;
			break;
		}
	}
	
	if(i==n){
		cout << "Key is not present.";
	}
}
