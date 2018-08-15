//
// Created by prituladima on 8/16/18.
//

#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main17() {

    ll a1, b1, c1, a2, b2, c2, a3, b3, c3;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> a3 >> b3 >> c3;

    for (int i = 0; i <= 100000; ++i) {//
        a1 = i;

        ll sum = a1 + b1 + c1;

        b2 = sum - b1 - b3;
        c3 = sum - c1 - c2;

        unordered_set<ll> un;
        un.insert(a1 + b1 + c1);
        un.insert(a2 + b2 + c2);
        un.insert(a3 + b3 + c3);

        un.insert(a1 + a2 + a3);
        un.insert(b1 + b2 + b3);
        un.insert(c1 + c2 + c3);

        un.insert(a1 + b2 + c3);
        un.insert(a3 + b2 + c1);

        if (un.size() == 1) {
            break;
        }

    }

    cout << a1 << " " << b1 << " " << c1 << " \n"
         << a2 << " " << b2 << " " << c2 << " \n"
         << a3 << " " << b3 << " " << c3;


    return 0;

}