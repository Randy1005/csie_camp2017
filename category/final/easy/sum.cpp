#include <iostream>
using namespace std;
int main(){
	int x;
	cout << "input n: ";
	cin >> x;
	int sum = 0;
	int i = 0;
	while(i <= x){
		sum += i;
		i++;
	}
	cout << "sum: " << sum << endl;
}
