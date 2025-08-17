#include <bits/stdc++.h>

using namespace std;

class Diem{
    private:
        float tung;
        float hoanh;
    public:
        void nhap(){
            cout << "nhap tung do ";
            cin >> tung;
            cout << "nhap hoanh do ";
            cin >> hoanh;
        }
        void xuat(){
            cout <<"(" << tung <<","<< hoanh << ")" << endl;
        }
};

int main(){
    Diem diem1, diem2;
    diem1.nhap(); diem1.xuat();
    diem2.nhap(); diem2.xuat();
}