#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n,tong=0;
    cout << " moi ban nhap vao 1 so ";
    cin >> n;
    while (n>0){
        tong = tong + (n%10);
        n=n/10;
    }
    cout << tong;
}
