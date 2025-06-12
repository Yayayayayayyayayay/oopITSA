#include<bits/stdc++.h>
using namespace std;
int main() {
    int time, ans;
    cin >> time;
    ans = time / 86400;
    time = time % 86400;    //換算成天 小時 分鐘 秒
    cout << ans << " days\n";
    ans = time / 3600;
    time = time % 3600;
    cout << ans << " hours\n";
    ans = time / 60;
    time = time % 60;
    cout << ans << " minutes\n";
    cout << time << " seconds\n";
    return 0;
}