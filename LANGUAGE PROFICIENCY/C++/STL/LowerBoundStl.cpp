#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, a;
    cin >> size;
    vector <int> v;

    for(int i = 0; i < size; i ++) {
        cin >> a;
        v.push_back(a);
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i ++) {
        int n;
        cin >> n;
        vector<int> :: iterator low = lower_bound(v.begin(), v.end(), n);
        if (v[low - v.begin()] == n)
            cout << "Yes" << " " << low - v.begin() + 1 << endl;
        else 
            cout << "No" << " " << low - v.begin() + 1 << endl;
    }
    return 0;
}

