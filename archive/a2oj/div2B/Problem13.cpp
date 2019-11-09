//
// Created by prituladima on 8/15/18.
//


#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define modulo 1000000007

void multiply(ll F[2][2], ll M[2][2]);

void power(ll F[2][2], ll n);

ll fib_w(ll n, ll x, ll y);

int main13() {

    ll x, y, n;

    cin >> x >> y >> n;

    cout << fib_w(n, x, y);

    return 0;
}

ll fib_w(ll n, ll x, ll y) {

    x = (x % modulo + modulo) % modulo;
    y = (y % modulo + modulo) % modulo;

    if (n == 1) {
        return x;
    } else if (n == 2) {
        return y;
    }

    ll F[2][2] = {{1, -1},
                  {1, 0}};

    power(F, n - 2);

    ll ans = ((F[0][0] * y) % modulo + modulo)%modulo;
    ans += ((F[0][1] * x) % modulo + modulo)%modulo;
    ans = (ans  % modulo + modulo)%modulo;


    return ans;
}

void multiply(ll F[2][2], ll M[2][2]) {
    ll x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    ll y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    ll z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    ll w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

    F[0][0] = (x % modulo + modulo) % modulo;
    F[0][1] = (y % modulo + modulo) % modulo;
    F[1][0] = (z % modulo + modulo) % modulo;
    F[1][1] = (w % modulo + modulo) % modulo;
}

void power(ll F[2][2], ll n) {
    if (n == 0 || n == 1)
        return;
    ll M[2][2] = {{1, -1},
                  {1, 0}};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}