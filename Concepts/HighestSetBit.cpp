#include <bits/stdc++.h>
using namespace std;
int MostSignificantBitPosition(int n){
    int position = -1;
    while(n > 0){
        position++;
        n >>= 1; // Divides the number 2
        // 10010(18) 
        // 01001(9)
        // 00100(4)
        // 00010(2)
        // 00001(1)
    }
    return position;
}
int main(){
    int num;
    cin >> num;
    cout << MostSignificantBitPosition(num) << endl;
}