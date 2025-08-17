#include <bits/stdc++.h>

using namespace std;

class Diem{
    float x, y;
    public:
        Diem() : x(0), y(0) {}
        friend istream& operator >> (istream& is, Diem& d);
        friend ostream& operator << (ostream& os, const Diem& d);
        float kc() const;
};
istream& operator>> (istream& is, Diem& d){
    cout << "Nhap hoang do: ";
    is >> d.x;
    cout << "Nhap tung do: ";
    is >> d.y;
    return is;
}
ostream& operator<< (ostream& os, const Diem& d){
    os << "(" << d.x << ", " << d.y << ")";
    return os;
}
float Diem::kc() const{
    return sqrt(pow(x, 2) + pow(y, 2));
}
int main(){
    int n;
    cin >> n;
    Diem dt[n+1];
    for(int i = 0; i < n; i++){
        cout << "Nhap diem thu " << i << ": ";
        cin >> dt[i];
    }
    float s = 0;
    for(int i = 0; i < n; i++){
        s += dt[i].kc();
    }
    cout << "\nTong khoang cach tu tat ca cac diem den goc toa do la: " << s << endl;
    int ymin = 0;
    float minrage = 1e9;
    for(int i = 0; i < n; i++){
        if(minrage > dt[i].kc()){
            minrage = dt[i].kc();
            ymin = i;
        }
    }
    cout << "Khoang cach nho nhat la: " << minrage;
}