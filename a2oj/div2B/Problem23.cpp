//
// Created by prituladima on 8/16/18.
//
#include <bits/stdc++.h>
#include <algorithm>

#define forr(i, s, n) for (int i = s; i < (int)(n); ++i)
#define forn(i, n) forr(i, 0, n)
#define foreach(cur, map) for(pair<char, int> cur : map)
#define ll long long

using namespace std;

int main() {

    int p, q, l, r;

    cin >> p >> q >> l >> r;
    int a[p], b[p];
    int c[q], d[q];

    forn(i, p) cin >> a[i] >> b[i];
    forn(i, q) cin >> c[i] >> d[i];

    int ans = 0;

    int N = 1001 + 3000;

    bool busyX[N];
    forn (i, N) busyX[i] = false;
    forn (i, p) forr (j, a[i], b[i] + 1) busyX[j] = true;

    bool busyZ[N];
    forn (i, N) busyZ[i] = false;
    forn (i, q) forr (j, c[i], d[i] + 1) busyZ[j] = true;

    forr (i, l, r + 1) {
        bool t = 0;
        forn (j, 1001) t |= busyX[j + i] && busyZ[j];
        ans += t;
    }

    cout << ans;
    return 0;
}
