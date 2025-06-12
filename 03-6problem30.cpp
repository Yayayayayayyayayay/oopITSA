#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    for(int i = 0 ;i < n; i++){
        cin >> x;
        if(x >= 50 && x <= 70){
            cout << x << endl;  //在50到70之間就輸出數值
        }else {
            cout << "100" << endl;  //剩下輸出100
        }
    }
    return 0;
}