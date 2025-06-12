#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    if(num > 0) cout << "正數\n";   //判斷是正數 負數還是0
    else if(num == 0) cout << "0\n";
    else cout << "負數\n";
    return 0;
}