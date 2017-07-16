#include <iostream>
using namespace std;
//function declaration
int sum(int a, int b);
void printSomething();
//main function
int main(){
	//call function
	cout << sum(3,7) << endl;
	printSomething();

	return 0;
}
//sum function
int sum(int a, int b){
	return (a + b);
}
//printSomething function
void printSomething(){
	cout << "something" << endl;
}

