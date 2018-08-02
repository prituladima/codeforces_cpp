#include<map>
#include<set>
#include<iostream>
#include<cstring>
#include<sstream>
#include<stdio.h>
#include<algorithm>
#include<utility>
#include<math.h>

using namespace std;

#define ll unsigned long long

bool prime[1000000];

int main8() {
    int n;
    cin >> n;

    ll a, x;

    prime[0] = prime[1] = 1;


    for (int i = 2; i * i <= 1000000; i++)
        if (!prime[i])
            for (int j = i * i; j <= 1000000; j += i) prime[j] = 1;


    for (int i = 0; i < n; i++) {

        cin >> a;

        x = (ll) sqrt(a);
        if ((x * x) == a && !prime[x]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}