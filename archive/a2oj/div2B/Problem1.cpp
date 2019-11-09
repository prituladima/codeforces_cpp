//
// Created by prituladima on 7/29/18.
//
using namespace std;

#include <iostream>

int main1() {
    int n, m, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--){
        string z = s;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(z[i], z[i+1]);
            }
        }
        s = z;
    }

    cout << s << endl;

    return 0;
}