//
// Created by prituladima on 8/15/18.
//

#include <bits/stdc++.h>

using namespace std;

int main12() {

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    //1 sorted
    bool sorted = true;
    for(int i = 0; i < n - 1; i++){
        if(a[i] > a[i + 1]){
            sorted = false;
        }
    }

    if(sorted){
        cout << 0;
        return 0;
    }

    //2 div on two part

    int dec = 0;
    int startDec = -1;
    for(int i = 0; i < n - 1; i++){
        if(a[i] > a[i+1]){
            dec++;
            startDec = i+1;
        }
    }

    if(dec == 1 && a[0] >= a[n-1]){
        cout << n - startDec;
    } else{
        cout << -1;
    }

    //3

    return 0;
}