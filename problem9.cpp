#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i;
    cin >> n;
    for (int j = 0; j < n; j++) {
        cin >> i;
        if (i > 31) {
            cout << "Value of more than 31" << endl;
        } else {
            cout << (1 << i) << endl; //計算2的i次方
        }
    }
    return 0;
}
