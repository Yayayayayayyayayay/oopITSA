#include<bits/stdc++.h>
using namespace std;
int main(){
    int Y;
    cin >> Y;   //年分
    bool detYear = false; //是否閏年
    if(Y % 4 == 0){
        if(Y % 100 == 0){
            if(Y % 400 == 0){
                detYear = true;
            }else{
                detYear = false;
            }
        }
        else{
            detYear = true;
        }
    }
    if(detYear == true) cout << "Bissextile Year\n";//是閏年
    else cout << "Common Year\n";//不是閏年
    return 0;
}