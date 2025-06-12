#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, absnum, binary[8];
    cin >> num;
    if(num > 0) absnum = num;
    else absnum = (-1) * num;
    int ans, count = 7;
    while(absnum){
        ans = absnum % 2;
        absnum = absnum / 2;
        binary[count] = ans;
        count--;
    }
    while(count >= 0){
        binary[count] = 0;  //把十進位轉乘二進位
        count--;
    }
    if(num < 0){
        int i;
        for(i = 7; i >= 0; i--){
            if(binary[i] == 1) break;
        }
        for(int j = 0; j < i ;j++){
            if(binary[j] == 1) binary[j] = 0;   //轉成二進位負數形式
            else binary[j] = 1;
        }
    }
    for(int i = 0; i <= 7; i++){
        cout << binary[i];
    }
    cout << endl;
    return 0;
}