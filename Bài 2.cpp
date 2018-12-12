#include <iostream>
#include <string>
using namespace std;
int main()
{
    float t,l,h;
    string ten;
    cout << " moi nhap ten sinh vien : ";
    getline(cin,ten);
    cout << " moi nhap diem mon theo thu tu toan , ly , hoa";
    cin >> t >> l >> h;
    cout << " diem trung binh cua sinh vien : "<< ten<< " la: " <<float((t+l+h)/3)<<endl;
    float dtb=(t+l+h)/3;
    if(dtb>=8){
        cout << " ban dat loat xuat sac";
    }else if( dtb>=7 && dtb <8){
        cout << " ban dat loat gioi";
    }else if(dtb >=6 && dtb <7){
        cout << " ban dat loai kha";
    }else if(dtb>=5 && dtb< 6){
        cout << " ban dat loai trung binh";
    }else {
        cout << " ban dat loai yeu ";
    }
    
    }

