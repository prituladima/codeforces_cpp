//
// Created by prituladima on 8/16/18.
//

#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define foreach(cur, map) for(pair<char, int> cur : map)
#define ll long long

using namespace std;

int main21() {

    ll n;
    cin >> n;
    ll m;
    cin >> m;
    ll d[m];
    forn(i, m) cin >> d[i];

    sort(d, d + m);

    if (d[0] == 1 || d[m - 1] == n) {
        cout << "NO";
        return 0;
    }

    if (n > 4) {
        for (int j = 0; j < m - 2; ++j) {
            if (d[j] + 1 == d[j + 1] && d[j + 1] + 1 == d[j + 2]) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}