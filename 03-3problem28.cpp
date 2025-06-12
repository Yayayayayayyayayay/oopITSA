#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    bool det = true;    //判斷是否質數
    cin >> num;
    if (num <= 1) {
        cout << "NO\n";
        det = false;
    }
    if(det == true){
        for(int i = 2;i < num ;i++){
            if(num % i == 0){
                cout << "NO\n"; //可以被整除就不是質數
                det = false;
                break;
            }
        }
    }
    if(det == true) cout << "YES\n";
    return 0;
}