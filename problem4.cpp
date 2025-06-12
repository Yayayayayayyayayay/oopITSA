#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin >> num;//n組資料
    int add1,add2;
    long long sum;
    for(int i = 0;i<num;i++){
        cin >> add1 >> add2;
        sum = add1 + add2;//兩數相加
        cout << sum << endl;
    }
	return 0;
}