// Author::TheWebKnight
// Permutations
// 02 April, 2022

#include<iostream>
#include<algorithm>
#include<vector>

typedef long long ll;

using namespace std;

void permute(int n) {
    if(n == 1) {
        cout << 1;
        return;
    }
    if(n <= 3) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    if(n == 4) {
        cout << "2 4 1 3" << endl;
        return;
    }
    for(int i = 1; i <= n; i+=2 ){
        cout << i << " ";
    }
    for(int i = 2; i <= n; i+= 2) {
        cout << i << " ";
    }
}

int main() {
    ll n;

    cin >> n;

    permute(n);

    return 0;
}