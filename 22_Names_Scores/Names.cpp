#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> names;

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
			name.erase(remove(name.begin(), name.end(), '"'), name.end());
            		names.push_back(name);
            		cout << name << "\n";
        	}
    	}

    	Text.close();

	//need to create a sorting algorithm
	//look up table for alphabetical order

}
