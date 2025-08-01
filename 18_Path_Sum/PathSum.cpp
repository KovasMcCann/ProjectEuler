#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int tsp(const vector<vector<int>>& tri) {
    vector<vector<int>> dp = tri;

    for (int row = dp.size() - 2; row >= 0; --row) {
        for (int col = 0; col < dp[row].size(); ++col) {
            dp[row][col] += max(dp[row + 1][col], dp[row + 1][col + 1]);
        }
    }

    return dp[0][0]; // Top element has the max total
}


int main(int argc, char** argv){
    string fileloc;

    //Get file flag
    for(int n = 1; n < argc; n++){ //crude way of doing it
        if(string(argv[n]) == "-i"){
           fileloc = argv[n + 1];
        }
    }

    cout << "Using:" << fileloc << endl; 

    ifstream file(fileloc);
    string line;

    vector<vector<int>> tri; 

    if (file.is_open()) {
        while (getline(file, line)) {
            istringstream iss(line);
            vector<int> row;
            int number;

            while (iss >> number) {
                row.push_back(number);
            }

            if (!row.empty()) {
                tri.push_back(row);
            }
        }
        file.close();
    } else {
        cerr << "Unable to open file\n";
        return 1;
    }

    cout << "\nTriangle read from file:\n";
    for (const auto& row : tri) {
        for (int val : row) cout << val << " ";
        cout << "\n";
    }

    // Compute result
    int result = tsp(tri);
    cout << "\nMaximum total from top to bottom: " << result << endl;

    //return 0;
}
