#include <iostream>
using namespace std;
int main(){
	char grade;
	cout << "your grade: ";
	//input grade
	cin >> grade;
	//switch statement if grade = A, B, C...
	switch(grade){
		case 'A':
			cout << "excellent!!" << endl;
			break;
		case 'B':
			cout << "good!!" << endl;
			break;
		case 'C':
			cout << "ok" << endl;
			break;
		case 'F':
			cout << "you suck" << endl;
			break;
		default:
			cout << "invalid grade" << endl; 
	}	
	return 0;
}
