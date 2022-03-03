#include<iostream>
using namespace std;

int main(){
	int a[50];
	int n;
	
	cout<<"Enter the no of elements you want to input (Max 50):";
	cin>>n;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	
	cout << endl;
	
	return 0;
}
