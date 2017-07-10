#include <iostream>
#include <string>
#include "Level_1.h"
#include <unistd.h>
using namespace std;

Level_1::Level_1(){
	cout << "Hello......." << endl; usleep(500000);
	cout << "I want to play a game......" << endl; usleep(500000);
	cout << "Level 1: crack the code" << endl;
}

void Level_1::verify(string inputCode){
	if(inputCode != code){
		usleep(500000);
		cout << "WRONG CODE...try again" << endl;
	}
	else{
		levelCracked = true;
		usleep(800000);
		cout << "SYSTEM LOGIN SUCCESS, now proceeding" << endl;
		usleep(500000);
		cout << "checking user status..." << endl;
		usleep(500000);
	}
}

bool Level_1::isCracked(){
	return levelCracked;
}
