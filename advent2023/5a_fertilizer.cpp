#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0); // fast cin

    
    //open file
    string line, seeds, extra;
    unsigned long dest = 0, source = 0, range = 0;
    
    int len = 20; //so we can change number of seeds
    unsigned long seedList[20]; 
    unsigned long temp[20];

    unsigned long maxSource, diff;

    ifstream file("day5.txt");
    if (file.is_open()) {
        //initialize seeds with first line
        file >> extra;
        for (int i = 0; i < len; i++) {
            file >> seeds;
            seedList[i] = stoll(seeds);
            temp[i] = stoll(seeds); //initialize with same
            cout << i << " " << seeds << endl;
        }

        while (getline(file, line)) {
            //process directions
            cout << line << endl;
            if (!line.empty() && isdigit(line[0])) {
                stringstream ss(line);
                ss >> dest;
                ss >> source;
                ss >> range;
                
                maxSource = source + range;
                for (int i = 0; i < len; i++) {
                    if ((seedList[i] >= source) && (seedList[i] < maxSource)) {
                        diff = seedList[i] - source; //calculate how much to add back in
                        temp[i] = dest + diff; //store here so we don't disturb
                    }
                    
                }
            } else if (line.empty()) {
                //chance to reset
                for (int i = 0; i < len; i++) {
                    seedList[i] = temp[i];
                    cout << i << " " << seedList[i] << endl;
                }
            }
        }
    }

    //account for final transformation!
    for (int i = 0; i < len; i++) {
        seedList[i] = temp[i];
        cout << i << " " << seedList[i] << endl;
    }

    for (int i = 0; i < len; i++) {
        cout << "seed " << i << ": " << seedList[i] << endl;
    }
    //find the minimum of the array
}