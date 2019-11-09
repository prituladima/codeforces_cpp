//
// Created by prituladima on 8/16/18.
//
#include <bits/stdc++.h>
#include <algorithm>

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define foreach(cur, map) for(pair<char, int> cur : map)
#define ll long long

using namespace std;

int main22() {

    ll n, t;
    cin >> n >> t;

    ll a[n];
    forn(i, n) cin >> a[i];
    ll sum = 0;
    ll max_amount_of_books = 0;
    int last_ = 0;
    forn(i, n) {
        sum += a[i];
//        cout << sum << " ";
        while (sum > t) {
            sum -= a[last_++];
//            cout << " -w- " << sum << " ";
        }

        max_amount_of_books = max(max_amount_of_books, (ll)(i + 1 - last_));
    }
    cout << max_amount_of_books;
    return 0;
}