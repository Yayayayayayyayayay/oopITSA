#include<bits/stdc++.h>
using namespace std;
int main() {
    int w, h;
    double BMI, H;
    cin >> w >>h;
    H = h / 100.0;
    BMI = w / (H * H);  //計算BMI
    cout << fixed << setprecision(2) << BMI << endl;
    return 0;
}