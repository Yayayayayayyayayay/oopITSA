#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int num;
    long long ans, ans2;
    for(int i = 0; i < n; i++){
        cin >> num;
        ans = num * num; //計算平方和
        ans2 = num * ans; //計算立方和
        cout << num << " " << ans << " " << ans2 << endl;
    }
	return 0;
}