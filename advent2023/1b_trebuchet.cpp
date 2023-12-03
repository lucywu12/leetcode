#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0); // fast cin

    int sum = 0;

    //open file
    string line;
    ifstream file("day1.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            string first;
            string second;
            bool found = false;
            //loop through each character in each line
            for (size_t i = 0; i < line.size(); i++) {
                //read until we hit a number (forward)

                //i guess try and convert the next 3, 4, 5 chars (if it's within bounds)
                //one two three four five six seven eight nine

                if (isdigit(line[i]) && !found) {
                    first = line[i];
                    second = line[i];
                    found = true; //found the first
                } else if (isdigit(line[i])) { 
                    //now read until we potentially hit a second number
                    second = line[i];
                }
            }
            int num = stoi(first + second); //combine the two strings, then cast to int;
            cout << "num is " << num << endl; //sanity check
            sum += num; //add to our sum!
        }
    }
    cout << "sum is: " << sum << endl;
    return 0; //output the sum!
}
