#include <bits/stdc++.h>
using namespace std;

class PS{
    private:
        double tu, mau;
    public:
        friend istream& operator >>(istream&, PS&);
        friend ostream& operator <<(ostream&, PS&);
        PS operator +(PS d);
        friend PS nhan(PS d, PS t);
        friend PS operator *(PS d, PS t);
        PS operator++();
        PS operator++(int); 
};

istream& operator>>(istream &is, PS &p){
    is >> p.tu >> p.mau;
    return is;
}

ostream& operator<<(ostream &os, PS &p){
    os << p.tu << "/" << p.mau << "\n";
    return os;
}

PS PS::operator+(PS d){
    PS t;
    t.tu = this->tu * d.mau + this->tu * this->mau;
    t.mau = this->mau * d.mau;
    return t;
}

PS nhan(PS d, PS t){
    PS r;
    r.tu = t.tu * d.tu;
    r.mau = t.mau * d.mau;
    return r;
}

PS operator*(PS d, PS t){
    PS r;
    r.tu = t.tu * d.tu;
    r.mau = t.mau * d.mau;
    return r;
}

PS PS::operator++(int){ //tang sau x = a++
    PS t;
    t = *this;
    tu = tu + mau;
    return t;
}

PS PS::operator++(){ //tang truoc x = ++a
    tu = tu + mau;
    return (*this);
}

int main(){
    PS a, b, c, d, e;
//    a.nhap(); a.xuat();    
//    b.nhap(); b.xuat();    
    cin>>a>>b;
    cout<<a<<b;
    c = a + b;
    cout<<"Tong cua hai phan so la: "; cout<<c;;
    d = nhan(a, b);
    cout<<"Tich cua hai phan so la: "; cout<<d;;
    e = a * b;
    cout<<"Tich cua hai phan so la: "; cout<<e;;
    a++;    cout<<a;
    ++b;    cout<<b;
}
