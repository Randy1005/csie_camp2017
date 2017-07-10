#include <iostream>
using namespace std;
int main(){
	int age, money;
	char club;
	cout << "which nightclub do you want to go to??";
	cin >> club;
	cout << "your age: ";
	cin >> age;
	cout << "how much money: ";
	cin >> money;
	if(club == 'A'){
		if(age >= 18 && money >= 250){
			cout << "welcome to club A!!" << endl;
		}
		else{
			cout << "get out!!" << endl;
		}
	}
	else{
		if(age >= 18 || money >= 250){
			cout << "welcome to club B!!" << endl;
		}
		else{
			cout << "get out!!" << endl;
		}
	}
	return 0;
}
