#include<iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	
	if(a>=0 && a<=10){
		cout << "Hello" << endl;
	}
	else if(a>10 && a<=20){
		cout << "World" << endl;
	}
	else{
		cout << "Welcome" << endl;
	}
	
	return 0;
}
