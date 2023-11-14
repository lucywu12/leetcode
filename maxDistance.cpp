#include <iostream> // fileio
#include <cmath> //math
using namespace std; // no need to do std::

int main() {
    cin.tie(0)->sync_with_stdio(0); // fast cin
    
    //Q: do i need to do error handling on the parameters? or can i assume all valid

    int max = 0;
    int dist = 0;

    //first line
    int n; //number of elements
    cin >> n;

    //second line
    //make an array to store - somewhat quick traversal?
    int *x_val = new int[n];
    int *y_val = new int[n];
    for (int a = 0; a < n; a++) {
        cin >> x_val[a];
    }
    
    for (int b = 0; b < n; b++) {
        cin >> y_val[b];
    }

    //will need to read in everything because you need x and y
    //calculate distances between... every possible pair, i and j iterators
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int x1 = x_val[i];
            int y1 = y_val[i];
            int x2 = x_val[j];
            int y2 = y_val[j];
            dist = pow((x1 - x2), 2) + pow((y1 - y2), 2); //distance: (x1 - x2)^2 + (y1 - y2)^2
            if (dist > max) {
                max = dist; // new max
            }
        }
    }

    cout << max << endl; //print max
    
    delete[] x_val;
    delete[] y_val;

    //Runtime
    //Distance calculations: O(n^2) 
    //There are n iterations outside, and {n(n+1)}/2 on the inside (Gauss)
}