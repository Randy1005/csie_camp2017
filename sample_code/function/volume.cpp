#include <iostream>
using namespace std;
//function declaration
int volume(int length = 1, int width = 1, int height = 1);
int main(){
	cout << volume() << endl;
	cout << volume(2) << endl;
	cout << volume(2,3) << endl;
	cout << volume(2,3,5) << endl;
	return 0;
}
//function definition
int volume(int length, int width, int height){
	return (length * width * height);
}

