#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	cout << "please enter 2 numbers: ";
	cin >> a >> b;
	if(a > b){
		cout << a << endl;
	}
	else{
		if(a == b){
			cout << "equal" << endl;
		}
		else{
			cout << b << endl;
		}
	}
}
