#include <bits/stdc++.h>
using namespace std;

class PS{
    private:
        int tu, mau;
    public:
        PS() {}
        PS(int tu, int mau){
            this->tu = tu;
            this->mau = mau;
        }
        void input(){
            cout << "Nhap tu so: ";
            cin >> tu;
            cout << "Nhap mau so: ";
            cin >> mau;
        }

        PS operator *(PS a){
            PS kq;
            kq.tu = this->tu * a.tu;
            kq.mau = this->mau * a.mau;
            return kq;
        }
        
        //can xem lai phan toi gian
        // return a chu khong phai return 1
        int ucln(int a, int b){
            if(b == 0){
                return a;
            }else{
               return ucln(b, a % b); 
            }
        }
        PS toigian(){
            // int ucln = __gcd(this->tu, this->mau);
            int uoc = ucln(tu, mau);
            tu = tu / uoc;
            mau = mau / uoc;
            if(mau < 0){
                tu = -tu;
                mau = -mau;
            }
            return *this;
        }

        friend ostream &operator <<(ostream &os, PS &p){
            p.toigian();
            os << p.tu << "/" << p.mau;
            return os;
        }

};

int main(){
    PS p1(6, 13), p2;
    p2.input();
    PS p = p1 * p2;
    cout << p1;
    cout << endl;
    cout << p2;
    cout << endl;
    cout << p;
}

