//
// Created by prituladima on 7/29/18.
//
#include <iostream>

#define ll long long

using namespace std;

ll nCr2(ll n);

int main4() {

    int m, n;
    cin >> n >> m;

    cout << nCr2(n / m) * (m - n % m) + nCr2(n / m + 1) * (n % m) << ' ';
    cout << nCr2(n - m + 1) << '\n';

    return 0;
}

ll nCr2(ll n) {
    return n * (n - 1) / 2;
}