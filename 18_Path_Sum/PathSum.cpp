#include <iostream>

using namespace std;

int main(int argc, char** argv){
    string fileloc;

    //Get file flag
    for(int n = 1; n < argc; n++){ //crude way of doing it
        if(string(argv[n]) == "-i"){
           fileloc = argv[n + 1];
        }
    }

    cout << "Using:" << fileloc << endl; 

    //Create BST

    //How to scan Porperly


}