// Author::TheWebKnight
// Increasing Array
// 01 April, 2022

#include<iostream>
#include<algorithm>
#include<vector>

typedef long long ll;

using namespace std;

int main() {
    ll n, res = 0;
    cin >> n;

    int prev;
    cin >> prev;
    n--;

    while(n--) {
        ll x;
        cin >> x;
        while(x < prev) {
            x++;
            res++;
        }
        prev = x;
    }
    cout << res << endl;
}