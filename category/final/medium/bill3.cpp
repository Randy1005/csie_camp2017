#include <iostream>
using namespace std;
int main(){
	char op;
	int x, y;
	while(op != 'x'){
		cout << "which operation to perform?? +, -, *, / or x(exit) :";
		cin >> op;
		switch(op){
			case '+':
				cout << "enter 2 numbers:";
				cin >> x >> y;
				cout << x << " + " << y << " = " << x + y << endl;
				break;
			case '-':
				cout << "enter 2 numbers:";
				cin >> x >> y;
				cout << x << " - " << y << " = " << x - y << endl;
				break;
			case '*':
				cout << "enter 2 numbers:";
				cin >> x >> y;
				cout << x << " * " << y << " = " << x * y << endl;
				break;
			case '/':
				cout << "enter 2 numbers:";
				cin >> x >> y;
				cout << x << " / " << y << " = " << x / y << endl;
				break;
			case 'x':
				break;
			default:
				cout << "unavailable op" << endl;
				break;
		}
	}
}
