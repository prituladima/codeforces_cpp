//
// Created by prituladima on 7/29/18.
//
#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

int main() {

    ll n, l;
    cin >> n >> l;
    ll a[n];

//    a[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
//    a[n + 1] = l;

    sort(a, a + n);

    ll ans = -1;
    for (int i = 0; i < n - 1; i++) {
        ll diff = a[i + 1] - a[i];
        if (ans < diff) {
            ans = diff;
        }
    }

    ans = max(ans, max(a[0], l - a[n - 1]) * 2);

    cout << ans/2 << (ans % 2 ? ".5000000000" : ".0000000000") << '\n';

    return 0;
}
