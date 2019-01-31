#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;  
    int* outer[n];
    for(int i = 0; i < n; i ++) {
        int size;
        cin >> size;
        outer[i] = new int [size];
        for (int j = 0; j < size; j ++) {
            cin >> outer [i][j];
        }
    }

    for (int i = 0; i < q; i ++) {
        int j,k;
        cin >> j >> k;
        cout << outer[j][k] << endl;
    }
    return 0;
}
