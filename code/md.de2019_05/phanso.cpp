#include <bits/stdc++.h>
using namespace std;

class PhanSo{
    private:
        int tu, mau;
    public:
        void input(){
            cout << "Nhap tu so: ";
            cin >> tu;
            cout << "Nhap mau so: ";
            cin >> mau;
        }
        void output(){
            cout << tu << "/" << mau;
        }

        PhanSo operator*(PhanSo a){
            PhanSo kq;
            kq.tu = this->tu * a.tu;
            kq.mau = this->mau * a.mau;
            return kq;
        }

};

int main(){
    PhanSo p1, p2, p3;
    cout << "Nhap p1: \n";
    p1.input();
    cout << "Nhap p2: \n";
    p2.input();
    p3 = p1 * p2;
    p3.output();
}