//
// Created by prituladima on 7/29/18.
//
using namespace std;

#include <iostream>

int main() {

    int n, m;
    cin >> n >> m;
    int deals[m + 1];
    deals[0] = 1;
    for (int i = 1; i < m + 1; i++) {
        cin >> deals[i];
    }

    long long counter = 0;
    for (int i = 1; i < m + 1; i++) {
        if (deals[i] >= deals[i - 1]) {
            counter += deals[i] - deals[i - 1];
        } else {
            counter += n - deals[i - 1];
            counter += 1;
            counter += deals[i] - deals[0];
        }
    }
    cout << counter << endl;
    return 0;
}