#include<bits/stdc++.h>
using namespace std;
int main() {
    int distance;
    cin >> distance;
    distance = distance * 100;  //計算距離
    double speed;
    speed = 100.0 - 30 * 2.54;  //計算每秒差速度
    int time;
    time = distance / speed;    //計算多久能追到
    time++;
    cout << time << endl;
    return 0;
}