#include<bits/stdc++.h>
using namespace std;
int main(){
    int M;
    cin >> M;   //月份
    if(M >= 3 && M <= 5) cout << "Spring\n";    //月份對應的季節
    else if(M >= 6 && M <= 8) cout << "Summer\n";
    else if(M >= 9 && M <= 11) cout << "Autumn\n";
    else cout << "Winter\n";
    return 0;
}