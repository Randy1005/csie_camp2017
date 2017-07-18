#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int n;
	cout << "how many boys: ";
	cin >> n;
	cout << "boy number: ";
	for(int i=0;i<n;i++){
		cout << rand() % 109 + 1 << " ";
	}
	cout << endl;

	return 0;
}
