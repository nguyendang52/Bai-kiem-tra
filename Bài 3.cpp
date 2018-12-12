#include <iostream>
using namespace std;
int main(){
    int n, gthua=1;
    cout << " moi ban nhap vao 1 so ";
    cin >> n;
    for (int i=2;i<=n;i++){
        gthua=gthua*i;
    }
    cout << " giai thua cua " << n << " la " << gthua;
}
