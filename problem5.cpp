#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    long long sum, sub, mul, div, remain;
    sum = x + y;    //兩數相加減乘除
    sub = x - y;
    mul = x * y;
    div = x / y;
    remain = x % y;
    if (remain < 0) {
        remain = remain + abs(y);
        div--;
    }
    cout << x << "+" << y << "=" << sum << endl;
    cout << x << "*" << y << "=" << mul << endl;
    cout << x << "-" << y << "=" << sub << endl;
    cout << x << "/" << y << "=" << div << "..." << remain << endl;

    return 0;
}