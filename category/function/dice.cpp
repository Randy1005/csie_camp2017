#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	srand(time(NULL));
	bool quit = false;
	char input;
	while(!quit){
		cout << "the dice number is: " << rand()%6 + 1 << endl;
		cout << "Try again?? (y/n)";
		cin >> input;
		if(input == 'y'){
			quit = false;
		}
		else{
			quit = true;
		}
	}
	return 0;
}
