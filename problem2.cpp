#include <bits/stdc++.h>
using namespace std;
int main() {
    int upper, base, height;     
    double area;
    cin >> upper >> base >> height;
    area = (double)((upper + base) * height) / 2; //梯形面積
    cout << "Trapezoid area:" << fixed << setprecision(1) << area << endl; //小數點後一位
    return 0;
}
