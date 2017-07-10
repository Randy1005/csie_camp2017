#include <iostream>
using namespace std;
float CeltoFa(float temp);
int main(){
	float celcius;
	cout << "please input Celsius:";
	cin >> celcius;
	cout << CeltoFa(celcius) << endl;
	return 0;
}

//Celsius to Fahrenheit convert
float CeltoFa(float temp){
	return 1.8 * temp + 32;
}

