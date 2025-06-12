#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, max = 0, x;
    cin >> n;
    for(int i = 0 ;i < n; i++){
        cin >> x;
        if(max < x) max = x; //從n個數字找最大值
    }
    cout << max << endl;
    return 0;
}