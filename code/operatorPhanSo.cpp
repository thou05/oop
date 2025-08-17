#include <bits/stdc++.h>

using namespace std;

class PhanSo{
    private:
        int tu, mau;
    public:
        friend istream& operator >> (istream& is, PhanSo &a){
            cout << "nhap tu so: ";
            is >> a.tu;
            cout << "nhap mau so: ";
            is >> a.mau;
            return is;
        }
        friend ostream& operator << (ostream& os, PhanSo &a){
            os << a.tu << "/"<< a.mau;
            return os;
        }
        // void input(){
        //     cout << "nhap tu so: " ;
        //     cin >>tu;
        //     cout << "nhap mau so: ";
        //     cin >> mau;
        // }
        // void output(){
        //     cout << tu << "/" << mau ;
        // }

        PhanSo operator+(PhanSo b){
            PhanSo cong;
            cong.tu = this->tu * b.mau + b.tu * this->mau;
            cong.mau = this->mau * b.mau;
            return cong;
        }
        PhanSo operator*(PhanSo b){
            PhanSo nhan;
            nhan.tu = this->tu * b.tu;
            nhan.mau = this->mau * b.mau;
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
    cin >> a;
    // a.input();
    cout << "nhap phan so thu 2" << endl;
    cin >> b;
    // b.input();
    cong = a + b;
    nhan = a * b;
    cong.simplify();
    nhan.simplify();
    // cong = add(a, b).simplify();
    // nhan = multi(a, b).simplify();
    cout << "cong 2 phan so: ";
    cout << cong;
    //cong.output();
    cout <<endl << "nhan 2 phan so: ";
    // nhan.output();
    cout << nhan;
}