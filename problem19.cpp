#include<bits/stdc++.h>
using namespace std;
int main(){
    int M, N;
    cin >> M >> N;
    while(N != 0 && M != 0){    //輾轉相除法求最大公因數
        if(M >= N){
            M = M % N;  
        }else{
            N = N % M;
        }
    }
    if(M == 0) cout << N << endl;
    else cout << M << endl;
    return 0;
}