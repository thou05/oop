#include <bits/stdc++.h>
using namespace std;

class Diem{
    private:
        float hoanh, tung;
    public:
        friend istream &operator >>(istream &is, Diem &a){
            cout << "enter hoanh do:";
            is >> a.hoanh;
            cout << "enter tung do: ";
            is >> a.tung;
            return is;
        }
        friend ostream &operator <<(ostream &os, Diem &a){
            os << "(" << a.hoanh << ", " << a.tung << ")";
            return os;
        }
        float khoangCachToaDo(){
            return sqrt(hoanh * hoanh + tung * tung);
        }

};

int main(){
    int n;
    cout << "enter how many point: ";
    cin >> n;
    Diem a[n+1];
    for(int i = 1; i <= n; i++){
        cout << "nhap diem " << i << endl;
        cin >> a[i];
    }
    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i].khoangCachToaDo();
    }
    cout << "tong khoang cach la: "<< sum << endl;
    int indexMin = 1;
    Diem min = a[1];
    for(int i = 1; i <= n; i++){
        if(a[i].khoangCachToaDo() < min.khoangCachToaDo()){
            min = a[i];
            indexMin = i;
        }
    }
    cout << "diem gan toa do nhat: " << a[indexMin];
}