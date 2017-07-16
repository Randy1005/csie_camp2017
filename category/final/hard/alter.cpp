#include <iostream>
using namespace std;
int main(){
	int i = 0;
	double sum = 0;
	double term = 1.0;
	double sign = 1.0;
	while(i < 100){
		sum += sign * term;
		sign = -sign;
		term /= 2;
		i++;
	}
	cout << "sum of alternative sequence: " << sum << endl;
}
