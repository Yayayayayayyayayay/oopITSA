#include<bits/stdc++.h>
using namespace std;
int main() {
    int time, money;
    cin >> time >> money;
    double salary = 0;
    if(time >= 121){    //超過121小時 每小時薪資*1.66
        salary = salary + (time - 120) * money * 1.66;
        time = 120;
    }
    if(time >= 61){     //超過61小時 每小時薪資*1.33
        salary = salary + (time - 60) * money * 1.33;
        time = 60;
    }
    if(time <= 60)  salary = salary + time * money;     //60小時以內 每小時薪資固定
    cout << fixed << setprecision(1) << salary << endl;
    return 0;
}