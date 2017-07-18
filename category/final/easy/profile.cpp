#include <iostream>
using namespace std;
int main(){
	char initial[3];
	int grade[3];
	float weight[3];
	float height[3];
	for(int i=0;i<3;i++){
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

	cout << "initial: ";
	for(int i=0;i<3;i++){
		cout << initial[i] << " ";
	}
	cout << endl;
	
	cout << "grade: ";
	for(int i=0;i<3;i++){
		cout << grade[i] << " ";
	}
	cout << endl;

	cout << "weight: ";
	for(int i=0;i<3;i++){
		cout << weight[i] << " ";
	}
	cout << endl;

	cout << "height: ";
	for(int i=0;i<3;i++){
		cout << height[i] << " ";
	}
	cout << endl;
}
