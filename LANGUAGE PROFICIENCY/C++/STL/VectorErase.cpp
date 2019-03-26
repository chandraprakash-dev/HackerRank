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
    
    int p;
    cin >> p;
    v.erase(v.begin() + p - 1);

    int m, n;
    cin >> m >> n;
    v.erase(v.begin() + m - 1, v.begin() + n -1);

    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i ++) 
        cout << v[i] << " ";
    return 0;
}

