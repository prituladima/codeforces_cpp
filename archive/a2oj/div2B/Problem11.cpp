//
// Created by prituladima on 8/15/18.
//


#include <bits/stdc++.h>


using namespace std;

int main11() {


    long long r, x, y, xf, yf;
    cin >> r >> x >> y >> xf >> yf;

    long long pow2 = (x - xf) * (x - xf) + (y - yf) * (y - yf);

    double dis = sqrt(pow2);

    cout <<  ((int)(dis + 2 * r - 1 + (pow2 != dis * dis))) / (2 * r);
    return 0;
}