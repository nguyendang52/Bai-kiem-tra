#include <iostream>
using namespace std;
int main(){
    int n;
    cout << " moi ban nhap vao 1 nam can kiem tra : ";
    cin >> n;
    if(n%4==0){
        cout << " nam "<< n << " la nam nhuan";
    }else{
        cout << " nam "<< n << " khong phai la nam nhuan";
    }
}
