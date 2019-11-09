#include <bits/stdc++.h>

using namespace std;

int main6() {

    int n;
    cin >> n;

    int a[n];
    int b[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }


    sort(b, b + n);

    int L = -1;
    int R = -1;

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            L = i;
            break;
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(a[i] != b[i]){
            R = i;
            break;
        }
    }

    if(R == -1 && L == -1){
        cout << "yes" << '\n' << 1 << ' ' << 1;
        return 0;
    }

    int seg_len = R - L + 1;

    int li = L;
    int ri = R;


    while (li <= R && ri >= L){

        if(a[li] != b[ri]){
            cout << "no";
            return 0;
        }

        li++;
        ri--;

    }

    L++;
    R++;
    cout << "yes" << '\n' << L << ' ' << R;

    return 0;
}