#include <iostream>
#include <string>
#include "Level_1.h"
using namespace std;

int main(){
	string inputCode;
	Level_1 *lv1 = new Level_1();
	while(!(lv1 -> isCracked())){
		cout << "USER password: ";
		cin >> inputCode;
		lv1 -> verify(inputCode);
	}
	
}
