#include <bits/stdc++.h>
using namespace std;

class DT{
    private:
        int n;
        double *a;
    public:
        DT(): n(0), a(NULL) {}
        DT(int n, double *a){
            this->n = n;
            this->a = a;
        }
        ~DT(){
            if(a) delete []a;
        }
        void nhap();
        int getN(){
            return n;
        }
        friend ostream &operator <<(ostream &os, DT &b);
        friend double sum(double x);
        void xuat();
};

void DT::xuat(){
    cout << "Da thuc: ";
    for(int i = 0; i <= n; i++){
        cout << a[i] << "x^" << i;
    }
}

void DT::nhap(){
    cout << "Nhap bac cua da thuc: ";
    cin >> n;
    cout << "Nhap cac he so cua da thuc: ";
    double *a = new double[n+1];
    for(int i = 0; i <= n; i++){
        cin >> a[i];
    }
}

ostream &operator <<(ostream &os, DT &b){
    os << "Da thuc: ";
    for(int i = 0; i <= b.n; i++){
        os << b.a[i] << "x^" << i;
    }
    return os;
}

int main(){
    DT a;
    a.nhap();
    a.xuat();
    cout << a;
}