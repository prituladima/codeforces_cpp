//
// Created by prituladima on 8/13/18.
//

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

#define ll long long

int main9() {

    string s;
    cin >> s;

    ll n = s.length();

    const ll last_val = (ll) (s[n - 1] - '0');

    ll ans = -1;

    for (ll i = 0; i <= n - 2; i++) {
        ll cur_val = (ll) (s[i] - '0');

        if (cur_val % 2 == 0 && last_val > cur_val) {
            ans = i;
            break;
        }
    }

    if (ans != -1) {
        swap(s[ans], s[n - 1]);
        cout << s;
        return 0;
    }


    for (ll i = n - 2; i >= 0; i--) {
        ll cur_val = (ll) (s[i] - '0');
        if (cur_val % 2 == 0 && last_val < cur_val) {
            ans = i;
            break;
        }
    }


    if (ans != -1) {
        swap(s[ans], s[n - 1]);
        cout << s;
        return 0;
    }


    cout << -1;
    return 0;
}
