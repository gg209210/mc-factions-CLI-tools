#include <iostream>
#include <string>
#include <vector>
using namespace std;
enum token{}
struct command{
	token t;
	vector<string> args;
	
}
int main(){
	
	bool exit=false;
	
	while(!exit){
		string input;
		cout << "> ";
		cin >> input;
		
	}
	
	return 0;
}
