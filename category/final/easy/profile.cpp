#include <iostream>
using namespace std;
int main(){
	char initial[5];
	int grade[5];
	float weight[5];
	float height[5];
	for(int i=0;i<5;i++){
		cout << "student " << i << endl;		
		cout << "initial?? " << endl;
		cin >> initial[i];
		cout << "grade?? " << endl;
		cin >> grade[i];
		cout << "weight?? " << endl;
		cin >> weight[i];
		cout << "height?? " << endl;
		cin >> height[i];
	}
	
}
