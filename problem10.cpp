#include<bits/stdc++.h>
using namespace std;
int main() {
    int miles;
    double kilometers;
    cin >> miles;
    kilometers = miles * 1.6;   //英里轉公里
    cout << "km=" << fixed << setprecision(1) << kilometers << endl;
    return 0;
}
