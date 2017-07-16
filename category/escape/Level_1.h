#include <string>
using namespace std;

class Level_1{
	public:
		Level_1();
		void verify(string inputCode);
		bool isCracked();
	private:
		string code = "7995";
		bool levelCracked = false;
};
