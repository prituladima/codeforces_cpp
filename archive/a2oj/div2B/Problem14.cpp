//
// Created by prituladima on 8/15/18.
//

#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main14() {


    ll n;
    cin >> n;

    ll h[n];

    for (ll i = 0; i < n; ++i) {
        cin >> h[i];
    }

    ll ans = 0;
    ll h_cur = 0;

    for (int j = 0; j < n; ++j) {
        ans += h[j] - h_cur;
        ans += 1;

        if (j + 1 < n) {

            if (h[j] > h[j + 1]){
                ans += h[j] - h[j+1];
                h_cur = h[j+1];

            }else{
                h_cur = h[j];
            }

            ans += 1;
        }

    }

    cout << ans;


    return 0;
}
