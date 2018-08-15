//
// Created by prituladima on 8/15/18.
//

#include <iostream>
#include <map>
#include <bits/stdc++.h>


using namespace std;

int main10(){


    string s;
    cin >> s;

    int k;
    cin >> k;

    int w[26];
    int max_Val = -1;
    unordered_map <char, int> map;

    for(int i = 0; i < 26; i++){
        cin >> w[i];
        max_Val = max(max_Val, w[i]);
        map['a' + i] = w[i];
    }

    long long ans = 0;
    for(int i = 0; i < s.length(); i++){
        ans += map[s[i]] * (i + 1);
    }

    unsigned long i = s.length() + 1;
    while (k--){
        ans += max_Val * i;
        i++;
    }


    cout << ans;

    return 0;
}
