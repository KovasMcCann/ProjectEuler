#include <iostream>
#include <string>

using namespace std;

int main(){
    int hw = 2;
    int routes = 0;

    string grid[hw + 1][hw + 1];

    //give value

    int start = 0;
    for(int x = 0; x < hw + 1; x++){
        for(int y = 0; y < hw + 1; y++){
            //grid[x][y] = to_string(start);
            grid[x][y] = to_string(x * y);
            
            cout << grid[x][y] << " ";
        }
        cout << endl;
    }

    cout << "-----------" << endl;
    cout << start;

}