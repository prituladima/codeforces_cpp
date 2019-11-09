//
// Created by prituladima on 8/16/18.
//
#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)

using namespace std;

int main19() {

    int n;
    cin >> n;

    int home[n];
    int visit[n];
    unordered_map<int, int> color_ocurence_home;
    unordered_map<int, int> color_ocurence_visit;

    forn(i, n) {
        int h, v;
        cin >> h >> v;
        home[i] = h;
        visit[i] = v;
        color_ocurence_home[h]++;
        color_ocurence_visit[v]++;
    }

    forn(i, n) {
        int visit_expected = n - 1;
        int all = 2 * visit_expected;


        int visit_ans = visit_expected - color_ocurence_home[visit[i]];
        int home_ans = all - visit_ans;

        cout << home_ans << " " << visit_ans << endl;
    }


    return 0;
}
