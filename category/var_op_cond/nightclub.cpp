#include <iostream>
using namespace std;
int main(){
	int age = 5;
	int money = 500;

	if(age >= 18){
		if(money >= 250){
			cout << "welcome to the club!!" << endl;
		}
		else{
			cout << "get out!!" << endl;
		}
	}
	else{
		cout << "get out" << endl;
	}
	return 0;
}

