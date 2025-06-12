#include<bits/stdc++.h>
using namespace std;
int main() {
    int h1, m1, h2, m2;
    int time = 0, money = 0;
    cin >> h1 >> m1 >> h2 >> m2;
    if(h2 < h1) h2 = h2 + 24;
    if(m2 < m1){
        h2--;
        m2 = m2 + 60;
    }
    time = (h2 - h1) * 60 + (m2 - m1);  //計算時間差
    if(time > 240){
        money = money + (time - 240) / 30 * 60;     //超過4小時 每半小時60元
        time = 240;
    }
    if(time > 120){
        money = money + (time - 120) / 30 * 40;     //2到4小時 每半小時40元
        time = 120;
    }
    if(time <= 120) money = money + time / 30 * 30;     //2小時以內 每半小時30元
    cout << money << endl;  //總共費用
    return 0;
}