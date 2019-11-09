//
// Created by prituladima on 8/15/18.
//
#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main15() {


    ll n, s, t;
    cin >> n >> s >> t;

    ll p[n];
    unordered_map<ll, ll> perm;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        perm[i] = p[i];
    }


    ll si = s;
    ll ans = 0;
    while (si != t) {
        ans++;
        si = perm[si - 1];
        if(si == s){
            cout << -1;
            return 0;
        }

    }

    cout << ans;

    return 0;
}
