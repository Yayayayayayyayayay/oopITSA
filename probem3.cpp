#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    double side;
    for (int i = 0; i < n; i++) {
        cin >> side;
        double area = side * side; //正方形面積
        area = round(area * 10) / 10; //四捨五入
        cout << fixed << setprecision(1) << area << endl; //小數點下一位
    }
    return 0;
}
