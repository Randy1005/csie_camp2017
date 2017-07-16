#include <iostream>
using namespace std;
int main(){
	//declare variable
	float height;
	int weight;
	char firstLetter;
	//user input height, weight, firstLetter
	cout << "please tell me your height: ";
	cin >> height;
	cout << "please tell me your weight: ";
	cin >> weight;
	cout << "first letter of your name is: ";
	cin >> firstLetter;
	//output
	cout << "height: " << height << endl;
	cout << "weight: " << weight << endl;
	cout << "first letter: " << firstLetter << endl;
	
	return 0;
}
