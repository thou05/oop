#include <bits/stdc++.h>
using namespace std;

class Diem{
    private:
        float x, y;
    public:
        void input(){
            cout << "nhap hoanh do: ";
            cin >> x;
            cout << "nhap tung do: ";
            cin >> y;
        }

        void output(){
            cout << "(" << x << ", " << y << ")";
        }
        float doDai(Diem d){
            return sqrt(pow(d.x - this->x, 2) + pow(d.y - this->y, 2));
        }
};

int main(){
    int n;
    Diem *diem;
    cout << "nhap so diem: ";
    cin >> n;
    diem = new Diem[n+1];
    for(int i = 1; i <= n; i++){
        cout << "Nhap diem thu " << i << endl;
        diem[i].input();
    }

    float dodai = diem[1].doDai(diem[n]);
    for(int i = 1; i < n; i++){
        dodai += diem[i].doDai(diem[i+1]);
    }

    cout << "do dai duong gap khuc la: " << dodai;
}