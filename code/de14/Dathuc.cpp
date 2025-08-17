#include <bits/stdc++.h>
using namespace std;

class DaThuc{
    private:
        int bac;
        float *a;
    public:
        DaThuc() : bac(0), a(NULL) {}
        ~DaThuc(){
            delete[] a;
        }
        // thieu cap phat bo nho dong
        void input(){
            cout << "Nhap bac cua da thuc: ";
            cin >> bac;
            a = new float[bac + 1];
            for(int i = 0; i <= bac; i++){
                cout << "Nhap a[" << i << "]: ";
                cin >> a[i];
            }
        }
        // thieu return
        friend ostream &operator <<(ostream &os, DaThuc &d){
            for(int i = d.bac; i >= 0; i--){
                os << d.a[i];
                if(i > 0){
                    os << "x^" << i << " + ";
                }
            }
            return os;
        }
        // chu y cho nay thieu &d va return
        friend double tinh(DaThuc &d, float x){
            double kq = 0;
            for(int i = 0; i <= d.bac; i++){
                kq += d.a[i] * pow(x, i);
            }
            return kq;
        }
};

int main(){
    DaThuc d;
    d.input();

    cout << d;

    float d1, d2;
    cout << "\nNhap d1: ";
    cin >> d1;
    cout << "Nhap d2: ";
    cin >> d2;
    double s = sqrt(tinh(d, d1) + tinh(d, d2));
    cout << "\nGia tri bieu thuc la: " << s;

}