//
// Created by prituladima on 8/1/18.
//
#include <bits/stdc++.h>

using namespace std;

int main7() {

    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> pairs;

    for (int i = 0; i < m; i++) {
        string f, s;
        cin >> f >> s;
        pairs.push_back(make_pair(f, s));
    }


    for (int i = 0; i < n; i++) {
        string cur;
        cin >> cur;
        for (int j = 0; j < m; j++) {
            if (pairs[j].first == cur || pairs[j].second == cur) {
                if (pairs[j].first.length() <= pairs[j].second.length()) {
                    cur = pairs[j].first;
                } else{
                    cur = pairs[j].second;
                }
            }
        }
        cout << cur << ' ';
    }

    return 0;
}