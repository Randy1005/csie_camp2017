#include <iostream>
using namespace std;
int main(){
	float studyTime[5] = {4,5,2,3,6};
	float degrees[5] = {3,3,2,2,3};
	float cost[5];
	float totalCost = 0;

	for(int i=0;i<5;i++){
		cost[i] = degrees[i] / studyTime[i];
		if(cost[i] > 0.6001){
			totalCost += cost[i];
		}
		//cout << cost[i] << endl;
	}
	for(int i=0;i<5;i++)
		cout << cost[i] << " ";
	cout << endl;
	cout << "total cost: " << totalCost << endl;
	
	
}
