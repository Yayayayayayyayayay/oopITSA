#include<bits/stdc++.h>
using namespace std;
int main(){
    int P, sum;
    cin >> P;
    if(P < 10) sum = 100 * P;   //10件以下原價
    else if(P < 30) sum = 100 * P * 0.9;     //10到29件9折
    else if(P < 100) sum = 100 * P * 0.8;   //30到99件8折
    else sum = 100 * P * 0.7;   //100件以上7折
    cout << sum << endl;
    return 0;
}