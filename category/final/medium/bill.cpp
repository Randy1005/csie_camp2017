#include <iostream>
using namespace std;
int main(){
	int n;
	int start;
	int end;
	cout << "please enter the number of food items: ";
	cin >> n;
	int food[n];
	for(int i=0;i<n;i++){
		cin >> food[i];
	}
	cout << "please enter start/end index: ";
	cin >> start >> end;

	int total = 0;
	for(int i=start;i<end + 1;i++){
		total += food[i];
	}

	cout << "total add up weight = " << total << endl;

}
