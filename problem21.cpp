#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, sum = 0;
    cin >> N;
    for(int i = 1; i <= N; i++){
        if(i % 2 == 0 && i % 3 == 0){
            if(i % 12 != 0){
                sum += i;   //計算到N能被2跟3整除且不能被12整除的數值的總和
            }
        }
    }
    cout << sum << endl;
    return 0;
}