#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int q;
    cin >> q; 

    map<string,int> m;

    for (int i = 0; i<q; i++)
    {
        int t, marks;
        string name;
        cin >> t >> name;
        if (t == 1){
            cin >> marks;
            m[name] += marks;
        }
        else if (t == 2)
            m.erase(name);
        else
            cout << m[name] << "\n";
    }
    return 0;
}




