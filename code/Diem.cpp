#include <bits/stdc++.h>
using namespace std;

class Diem{
    private:
        float x, y;
    public:
        friend istream &operator >>(istream &is, Diem &d){
            is >> d.x >> d.y;
            return is;
        }
        friend ostream &operator <<(ostream &os, Diem &d){
            os << "(" << d.x << "," << d.y << ")";
            return os;
        }
        friend float khoanhCachToaDo(Diem d){

            return sqrt(d.x * d.x + d.y * d.y);
        }

        float khoanhCachToaDo(){

            return sqrt(x * x + y * y);
        }


};

int main(){
    int n;
    cout << "nhap so diem: ";
    cin >> n;
    Diem d[n+1];
    for(int i = 1; i <= n; i++){
        cout << "Nhap diem thu " << i << ": ";
        cin >> d[i];
    }

    int max = 1;
    for(int i = 2; i <= n; i++){
        if(d[i].khoanhCachToaDo() > d[max].khoanhCachToaDo()){
            max = i;
        }
    }
    cout << "\nDiem xa goc toa do nhat la: " << d[max];
}