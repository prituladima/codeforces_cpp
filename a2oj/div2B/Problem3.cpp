//
// Created by prituladima on 7/29/18.
//

using namespace std;

#include <iostream>

int main3() {

    int n, m, k;
    cin >> n >> m >> k;

    long int arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    long int fed;
    cin >> fed;

    int ans = 0;
    for (int i = 0; i < m; i++) {
        long int bit = arr[i] ^ fed;

        int counter = 0;
        for (long int j = bit; j > 0;) {
            counter += j & 1;
            j >>= 1;
        }

        ans += counter <= k ? 1 : 0;

    }
    cout << ans << endl;
    return 0;
}