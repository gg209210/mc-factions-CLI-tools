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
		entry();
		entry(string str);
		int x; //the x chunk coord
		int y; //the y chunk coord
		string claim; //the chunk owner
	private:
	int get_x_from_str();
	int get_y_from_str();
	int get_claim_from_str();
	
};

enum token {
	t
	};
struct command{
	token t;
	vector<string> args;
	
};
void load(string filename,vector<entry> * invec);
void save();
int get_x_from_str();
int get_y_from_str();
int get_claim_from_str();

int main(int argc, char *argv[]){
vector<entry> *current; //pointer to vector of current values
vector<entry> *staging; //pointer to vector of new values
current=new vector<entry>;
staging=NULL;
string fname;	
	if(argc == 2){
		fname = argv[1];
		load(fname, current);
	}
	
	
	
	bool exit=false;
	/*cout << "Use block coordinates instead of chunk?" << endl;
	while(!exit){
		string input;
		cout << "> ";
		cin >> input;
		
	}*/
	//test
	cout << "loaded " << fname << endl;
	for(int i=0; i<current->size(); i++){
		cout << (*current)[i].x;
		
	}
	
	
	return 0;
}

void load(string filename,vector<entry> * invec){
	ifstream fin;
	fin.open(filename);
	string tmp;
	cout << filename << endl;
	while(getline(fin,tmp)){
		if(tmp.find('"')!=string::npos){
		entry new_entry(tmp);
		invec->push_back(new_entry);
		}
		tmp.clear();
	}
	
}

entry::entry(){
	x=0;
	y=0;
	claim="wilderness";
	
}

entry::entry(string str){
	int first_comma=str.find(',');
	//cout << first_comma << endl;
	int first_quote = str.find('"');
	string x_val = str.substr(first_quote+1,first_comma-(first_quote+1));
	//cout << x_val << endl;
	x = stoi(x_val);
	cout << x << ',';
	int coord_end_quote = str.find('\"',first_comma)+1;
	//cout << coord_end_quote << endl;
	string y_val = str.substr(first_comma+1,coord_end_quote-(first_comma+2));
	cout << y << endl;
	y = stoi(y_val);
	claim= str.substr(str.find('\"',coord_end_quote),str.size()-2);
	
	
}
