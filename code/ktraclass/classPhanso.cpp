#include <bits/stdc++.h>

using namespace std;

class PhanSo{
    private:
        int tu, mau;
    public:
        void input(){
            cout << "nhap tu so: " ;
            cin >>tu;
            cout << "nhap mau so: ";
            cin >> mau;
        }
        void output(){
            cout << tu << "/" << mau ;
        }

        friend PhanSo add(PhanSo a, PhanSo b){
            PhanSo cong;
            cong.tu = a.tu * b.mau + b.tu * a.mau;
            cong.mau = a.mau * b.mau;
            return cong;
        }

        friend PhanSo multi(PhanSo a, PhanSo b){
            PhanSo nhan;
            nhan.tu = a.tu * b.tu;
            nhan.mau = a.mau * b.mau;
            return nhan;
        }

        //ucln de quy
        int ucln(int a, int b){
            if(b == 0){
                return a;
            }
            return ucln(b, a % b);
        }
        PhanSo simplify(){
            int uclnValue = ucln(abs(tu), abs(mau));
            tu /= uclnValue;
            mau /= uclnValue;

            if(mau < 0){
                tu = -tu;
                mau = -mau;
            }
            return *this;
        }
};

int main(){
    PhanSo a, b, cong, nhan;
    cout << "nhap phan so thu 1" << endl;
    a.input();
    cout << "nhap phan so thu 2" << endl;
    b.input();
    cong = add(a, b).simplify();
    nhan = multi(a, b).simplify();
    cout << "cong 2 phan so: ";
    cong.output();
    cout <<endl << "nhan 2 phan so: ";
    nhan.output();
}