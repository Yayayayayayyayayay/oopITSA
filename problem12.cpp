#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, record;
    cin >> n;
    record = n / 10;    //判斷需要幾個10元
    cout << "NT10=" << record << endl;
    n = n % 10;
    record = n / 5;    //判斷需要幾個5元
    cout << "NT5=" << record << endl;
    n = n % 5;    //判斷需要幾個1元
    cout << "NT1=" << n << endl;
    return 0;
}