#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num1, num2, num3, ans;
    for(int i = 0; i < n;i++){
        cin >> num1 >> num2;
        if(num1 >= num2) num3 = num1 - num2 + 1;
        else num3 = num2 - num1 + 1;
        ans = (num1 + num2) * (num3) / 2;   //計算從num1加到num2的總和
        cout << ans << endl;
    }
    return 0;
}