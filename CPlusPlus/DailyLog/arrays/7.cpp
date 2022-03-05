#include<iostream>
using namespace std;

int main(){
	int arr[] = {5, 3, 1, 2, 4};
	int n = sizeof(arr)/sizeof(int), i, j;
	
	for(i = 1; i < n; i++){
		int pick = arr[i];
		for (j=i-1; j>=0 and arr[j] > pick; j--){
			arr[j+1]=arr[j];
		}
		arr[j+1] = pick;
	}
	
	for(int i = 0; i < n; i++){
		cout << arr[i] << " " << endl;
	}
	
	return 0;
}
