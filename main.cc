#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
//claim (hard|soft|special) (square|circle|triangle|shape)
// special (black|white) <list>
//ring  ---for the common case

//fix ---normalizes claim areas
class entry{
	public:
		int x; //the x chunk coord
		int y; //the y chunk coord
		string claim; //the chunk owner
	private:
	int get_x_from_str();
	int get_y_from_str();
	int get_claim_from_str();
	
};

enum token{}
struct command{
	token t;
	vector<string> args;
	
}
void load(string filename,vector<entry> * invec);
void save();
int get_x_from_str();
int get_y_from_str();
int get_claim_from_str();
int main(int argc char *argv[]){
vector<entry> *current; //pointer to vector of current values
vector<entry> *staging; //pointer to vector of new values
current=new vector<entry>;
staging=NULL;	
	if(argc == 2){
		load(argv[1], current)
		
	}
	
	
	
	bool exit=false;
	cout << "Use block coordinates instead of chunk?" << endl;
	while(!exit){
		string input;
		cout << "> ";
		cin >> input;
		
	}
	
	return 0;
}

load(string filename,vector<entry> * invec){
	ifstream fin;
	fin.open(filename);
	string tmp;
	while(getline(fin,tmp)){
		entry new_entry;
		
		tmp.clear();
	}
	
}
