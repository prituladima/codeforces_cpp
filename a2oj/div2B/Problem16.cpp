//
// Created by prituladima on 8/16/18.
//
#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main16() {

    string s1, s2;
    cin >> s1 >> s2;


    if (s1.length() < s2.length()) {
        cout << "need tree";
        return 0;
    }


    if (s1.length() == s2.length()) {
        //1 array

        string c1 = s1;
        string c2 = s2;

        sort(c1.begin(), c1.end());
        sort(c2.begin(), c2.end());


        if (c1 == c2) {
            cout << "array";
        } else {
            cout << "need tree";
        }
    } else {


        //automaton

        int m = s2.length();
        int n = s1.length();

        int j = 0;
        for (int i = 0; i < n && j < m; i++)
            if (s2[j] == s1[i])
                j++;


        if (j == m) {
            cout << "automaton";
            return 0;
        }


        //2 need tree
        unordered_map<char, int> map1;
        for (int i = 0; i < s1.length(); ++i) {
            map1[s1[i]]++;
        }

        unordered_map<char, int> map2;
        for (int j = 0; j < s2.length(); ++j) {
            map2[s2[j]]++;
        }

        bool need_tree = false;

        for (pair<char, int> cur_char: map2) {
            char key_to_check = cur_char.first;
            if (map2[key_to_check] > map1[key_to_check]) {
                need_tree = true;
            }
        }


        if (need_tree) {
            cout << "need tree";

        } else {
            cout << "both";
        }


    }

    return 0;
}
