#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) { //判斷是否質數
            return false;
        }
    }
    return true;
}
int main() {
    int N;
    cin >> N;
    for (int i = N - 1; i >= 2; --i) {
        if (isPrime(i)) {
            cout << i << endl;  //找在N中最大的質數
            break;
        }
    }
    return 0;
}