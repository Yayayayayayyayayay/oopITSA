#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c; 
    cin >> a >> b >> c;//找最大值
    int max = a; 
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    cout << max << endl;
    return 0;
}
