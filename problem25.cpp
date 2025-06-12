#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2;
    double d;
    x = x1 - x2;
    y = y1 - y2;
    x = x * x;
    y = y * y;
    d = sqrt(x + y);    //計算兩點之間的距離
    cout << fixed << setprecision(2) << d << endl;
    return 0;
}