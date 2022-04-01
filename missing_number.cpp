// Author::TheWebKnight
// Missing Number
// 01 April, 2022

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

    long long int sum = 0, n, num;

    cin >> n;

    for(int i = 0; i < n-1; i++) {
        cin >> num;
        sum += num;
    }

    cout << (n * (n + 1)) / 2 - sum;

}