#include<iostream>
using namespace std;

int main(){
	int arr[] = {5, 4, 3, 2, 1};
	int n = 5;
	
	for(int j = 0; j <= n-1; j++){
		for(int i = 0; i <= n-2; i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << arr[i] << " " << endl;
	}
	return 0;
}
