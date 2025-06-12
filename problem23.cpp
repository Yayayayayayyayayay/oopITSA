#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, ans, count = 0;
    char hex[5];
    cin >> num;
    char find[] = "0123456789ABCDEF";
    while(num){
        ans = num % 16;
        num = num / 16;
        hex[count] = find[ans];
        count++;
    }
    for(int i = count - 1;i >= 0;i--){
        cout << hex[i]; //把十進位轉乘十六進位
    }cout << endl;
    return 0;
}