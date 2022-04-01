// Author::TheWebKnight
// Weird Algorithm
// 01 April, 2022

#include<iostream>
#include<algorithm>
#include<vector>

typedef long long ll;

using namespace std;

int main() {
    ll n;
    cin >> n;

    while(n != 1) {
        cout << n << " ";
        if( !(n & 1)) {
            n >>= 1;
        }else {
            n *= 3;
            n += 1;
        }
    }
    cout << 1;
}
