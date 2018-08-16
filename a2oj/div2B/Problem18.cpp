//
// Created by prituladima on 8/16/18.
//

#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <cassert>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <vector>
#include <ctime>
#include <queue>
#include <set>
#include <map>

using namespace std;
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define fore(i, b, e) for (int i = (int)(b); i <= (int)(e); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define ll long long int
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long i64;
typedef unsigned long long u64;
const int inf = 1e9 + 100500;

int main18() {

    int n, m;
    cin >> n >> m;


    int B[n][m];
    int A[n][m];

    forn (i, n) forn (j, m) cin >> B[i][j];
    forn (i, n) forn (j, m) A[i][j] = 1;

    forn (i, n) forn (j, m) if (B[i][j] == 0) {
                forn(k, n) A[k][j] = 0;
                forn(k, m) A[i][k] = 0;
            }

    forn (i, n) forn (j, m) {
            int t = 0;
            forn(k, n) t |= A[k][j];
            forn(k, m) t |= A[i][k];
            if (t != B[i][j]) {
                cout << "NO";
                return 0;
            }
        }

    cout << "YES" << endl;
    forn (i, n) {
        forn (j, m) cout << A[i][j] << ' ';
        cout << endl;
    };


    return 0;
}
