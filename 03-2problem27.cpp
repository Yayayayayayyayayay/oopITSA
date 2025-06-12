#include<bits/stdc++.h>
using namespace std;
int main(){
    char alphabat;
    cin >> alphabat;    //判斷是子音還是母音
    if(alphabat == 'a' || alphabat == 'A' ||
       alphabat == 'e' || alphabat == 'E' ||
       alphabat == 'i' || alphabat == 'I' ||
       alphabat == 'o' || alphabat == 'O' ||
       alphabat == 'u' || alphabat == 'U'){
        cout << "母音\n";
       }else{
        cout << "子音\n";
       }
    return 0;
}