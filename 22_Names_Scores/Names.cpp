#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

vector<string> names;

map<char, int> cpos = {
	{'A', 1},
	{'B', 2},
	{'C', 3},
	{'D', 4},
	{'E', 5},
	{'F', 6},
	{'G', 7},
	{'H', 8},
	{'I', 9},
	{'J', 10},
	{'K', 11},
	{'L', 12},
	{'M', 13},
	{'N', 14},
	{'O', 15},
	{'P', 16},
	{'Q', 17},
	{'R', 18},
	{'S', 19},
	{'T', 20},
	{'U', 21},
	{'V', 22},
	{'W', 23},
	{'X', 24},
	{'Y', 25},
	{'Z', 26}
};

int total = 0;

int main(int argc, char** argv){
	string fileloc;

	for (int n = 1; n < argc; n++) {
        	if (string(argv[n]) == "-f" && n + 1 < argc) {
            	fileloc = argv[n + 1];
            	break;
        	}
    	}
    	cout << "Using:" << fileloc << "\n";

	ifstream Text(fileloc);

	string line;
    	while (getline(Text, line)) {
        	stringstream ss(line);
        	string name;

        	while (getline(ss, name, ',')) {
			name.erase(remove(name.begin(), name.end(), '"'), name.end()); //####
            		names.push_back(name);
            		cout << name << "\n";
        	}
    	}

    	Text.close();

	//need to create a sorting algorithm

	int count = 1;
	
	for(string name: names){
		int worth = 0;
		for(int i = 0; i < name.size(); i++){
			worth += cpos[name[i]];
		}
		
		cout << count << ":" << worth << " / " << name << "\n";
		total += count * worth;
		count++;
	}

	cout << "---------\n" << total << "\n";
}
