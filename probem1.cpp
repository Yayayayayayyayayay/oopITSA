#include <bits/stdc++.h>
using namespace std;
int main() {
    int base, height;
    double area;
    cin >> base >> height;
    area = (double)(base * height) / 2; //三角形面積
    cout << "Triangle area:" << fixed << setprecision(1) << area << endl;  //小數點後一位
    return 0;
}
