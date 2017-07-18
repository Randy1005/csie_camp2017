#include <iostream>
using namespace std;
int main(){
	float studyTime[5] = {4,5,2,3,6};
	float degrees[5] = {3,3,2,2,3};
	float cost[5];
	bool saveOrNot[5];
	float totalCost = 0;
	float oriCost = 0;
	for(int i=0;i<5;i++){
		saveOrNot[i] = true;
	}

	for(int i=0;i<5;i++){
		cost[i] = degrees[i] / studyTime[i];
		if(cost[i] <= 0.6){
			saveOrNot[i] = false;
		}
		//cout << cost[i] << endl;
	}
	//original cose
	for(int i=0;i<5;i++){
		oriCost += cost[i];
	}
	for(int i=0;i<5;i++){
		if(saveOrNot[i])
			totalCost += cost[i];
	}
	cout << "total cost: " << totalCost << endl;
	cout << "original cost: " << oriCost << endl;
	
	
}
