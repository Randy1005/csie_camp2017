#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void CSIE();
void unlock(int);
void wrong(int);

int main(){
	CSIE();
	//system("COLOR 0A");
	bool Level1 = false, Level2 = false, Level3 = false, Level4 = false;
	string password1 = "!&^A@nJ3^WWPmY!ricOq";
	string password2 = "35247";
	string password3 = "N!aMc@$3yy";
	string password4 = "CSIE";
	//string password1 = "test", password2 = "test", password3 = "test", password4 = "test";
	string ans;

	//Level1

	while(Level1 == false){
		cout << "    -------" << "---------------------------------------------" << endl;
		cout << "    | Hint:" << " Find the password somewhere in index.html. |" << endl;
		cout << "    -------" << "---------------------------------------------\n" << endl;
		cout << "Ans: ";
		cin >> ans;
		if(password1 == ans){
			unlock(1);
			Level1 = true;
		}
		else{
			wrong(1);
		}
	}

	//Level2

	while(Level2 == false){
		cout << "\t -------" << "----------------------------------" << endl;
		cout << "\t | Hint:" << "  Find the password in the Code. |" << endl;
		cout << "\t | the password after encoding is 63584.       |" << endl;
		cout << "\t -------" << "----------------------------------\n" << endl;
		cout << "Ans: ";
		cin >> ans;
		if(password2 == ans){
			unlock(2);
			Level2 = true;
		}
		else{
			wrong(2);
		}
	} 


	//Level3

	while(Level3 == false){
		cout << "-------" << "-------------------------------------------------------------------" << endl;
		cout << "| Hint:" << "  The password for the next level, which all lowercase (a-z)      |" << endl;
		cout << "|\t and uppercase (A-Z) letters have been rotated by 13 positions.  |" << endl;
		cout << "-------" << "-------------------------------------------------------------------\n" << endl;
		cout << "\t\t========================" << endl;
		cout << "\t\t| Password: A!nZp@$3ll |" << endl;
		cout << "\t\t========================" << endl;
		cout << "Ans: ";
		cin >> ans;
		if(password3 == ans){
			unlock(3);
			Level3 = true;
		}
		else{
			wrong(3);
		}
	} 	

	//Level4 

	while(Level4 == false){
		cout << "     -------" << "------------------------------------------" << endl;
		cout << "     | Hint:" << "  The password is a base64 encoded data. |" << endl;
		cout << "     -------" << "------------------------------------------\n" << endl;
		cout << "\t\t======================" << endl;
		cout << "\t\t| Password: Q1NJRQ== |" << endl;
		cout << "\t\t======================" << endl;
		cout << "Ans: ";
		cin >> ans;
		if(password4 == ans){
			unlock(4);
			Level4 = true;
		}
		else{
			wrong(4);
		}
	}

	if(Level1 == true && Level2 == true && Level3 == true && Level4 == true){
		system("clear");
		CSIE();
		unlock(5);
		cout << "\t\t    ===============" << endl;
		cout << "\t\t    |  You  Win!  |" << endl;
		cout << "\t\t    ===============" << endl;
	}
}

//Start Page
void CSIE(){
	cout << "\t===========================================" << endl;
	cout << "\t|    .o88b.  .d8888.  d888888b  d88888b   |" << endl;
	cout << "\t|   d8P  YS  88'  YP    '88'    d8'       |" << endl;
	cout << "\t|   8P       '8bo.       88     d88888Y   |" << endl;
	cout << "\t|   8b         'Y8b.     88     d88888D   |" << endl;
	cout << "\t|   Y8b  d8  db   8D    .88.    d8.       |" << endl;
	cout << "\t|    'Y88P'  '8888Y'  Y888888P  d88888P   |" << endl;
	cout << "\t===========================================\n\n" << endl;
}

//Unlock Page
void unlock(int level){
	system("clear");
	CSIE();
	for(int i=1; i<=level; i++){
		cout << "\t\t  ===================" << endl;
		cout << "\t\t  || Unlock Level" << i << " ||" << endl;
		cout << "\t\t  ===================\n" << endl;
	}
}

//Wrong Page
void wrong(int level){
	system("clear");
	CSIE();
	unlock(level-1);
	cout << "\t   ===================================" << endl;
	cout << "\t   || Password Incorrect, Try Again ||" << endl;
	cout << "\t   ===================================\n" << endl;
}

