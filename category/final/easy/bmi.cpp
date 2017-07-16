#include <iostream>
using namespace std;
int main(){
	float height;
	float weight;
	float bmi;
	cout << "please enter your height: ";
	cin >> height;
	cout << "please enter your weight: ";
	cin >> weight;
	
	bmi = (weight / ((height/100.0) * (height/100.0)));
	cout << "your BMI is: ";
	cout << bmi << endl;

}
