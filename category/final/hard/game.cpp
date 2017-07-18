#include <iostream>
using namespace std;
int main(){
	int killList[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
	int card1, card2;
	cout << "the card is: ";
	cin >> card1 >> card2;

	//first round
	for(int i=0;i<13;i++){
		if((i+1) % card1 == 0)
			killList[i] = 1;
	}
	//second round
	int j=0;
	for(int i=0;i<13;i++){
		if(killList[i] != 1){
			if((j+1) % card2 == 0){
				killList[i] = 1;
			}
			j++;
		}
	}
	
	//survived 2 rounds
	cout << "Survivors: " << endl;
	for(int i=0;i<13;i++){
		if(killList[i] != 1){
			cout << "number " << i+1 << endl;
		}
	}

}
