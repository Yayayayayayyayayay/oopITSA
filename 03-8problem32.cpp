#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num; //1是Person 2是Fairy 3是Dwarf
    switch(num){
        case 1:
            cout << "Person\n";
            break;
        case 2:
            cout << "Fairy\n";
            break;
        case 3:
            cout << "Dwarf\n";
            break;
    }
    return 0;
}