// Author::TheWebKnight
// Weird Algorithm
// 01 April, 2022

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

int main() {
    ll res = 1, cur = 1;

    char prev = ' ';

    string s;
    cin >> s;

    for (char c : s) {
        if(prev == ' ') {
            prev = c;
            continue;
        }
        if(c == prev) {
            prev = c;
            cur++;
        }else {
            res = max(res, cur);
            prev = c;
            cur = 1;
        }
    }
    res = max(res, cur);
    cout << res << endl;
}