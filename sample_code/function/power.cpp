#include <iostream>
using namespace std;
//function declaration
double power(double num, int pow);
//main
int main(){
	cout << power(9.0,3) << endl;
	return 0;
}
//function definition
double power(double num, int pow){
	double ans = 1.0;
	if(pow > 0){
		for(int i=0;i<pow;i++){
			ans *= num;
		}
	}
	else{
		for(int i=0;i<-pow;i++){
			ans /= num;
		}
	}
	return ans;
}

