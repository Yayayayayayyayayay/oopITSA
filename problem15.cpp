#include<bits/stdc++.h>
using namespace std;
int main() {
    int min;
    cin >> min;
    double money;
    if(min <= 800)  money = min * 0.9;  //800分鐘以下每分鐘0.9元
    else if(min < 1500)    money = min * 0.9 * 0.9;     //800到1500分鐘打9折
    else money = min * 0.9 * 0.79;  //1500分鐘以上打79折
    cout << fixed << setprecision(1) << money << endl;
    return 0;
}