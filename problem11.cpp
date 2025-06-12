#include<bits/stdc++.h>
using namespace std;
int main() {
    double degree, Fahrenheit;
    cin >> degree;
    Fahrenheit = degree * 9 / 5 + 32;   //攝氏溫度轉華氏
    cout << fixed << setprecision(1) << Fahrenheit << endl;
    return 0;
}