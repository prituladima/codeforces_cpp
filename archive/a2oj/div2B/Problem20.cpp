//
// Created by prituladima on 8/16/18.
//

#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define foreach(cur, map) for(pair<char, int> cur : map)

using namespace std;

int main20() {

    string s;
    cin >> s;


    unordered_map<char, int> occur;
    forn(i, s.length()) occur[s[i]]++;

    int max_odd_occur = 0;
    int steps = s.length();
    foreach(cur, occur) {
        if (cur.second % 2 == 1) {
            max_odd_occur = max(max_odd_occur, cur.second);
        } else {
            steps -= cur.second;
        }
    }
    steps -= max_odd_occur;

    cout << ((steps % 2 == 0) ? "First" : "Second");

    return 0;
}