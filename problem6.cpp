#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin >> num;//num組資料
    int x, y;
    long long ans, sum;
    for(int i = 0; i < num; i++){//兩數平方和
        cin >> x >> y;
        sum = x + y;
        ans = sum * sum;
        cout << ans << endl;
    }
	return 0;
}