#include <bits/stdc++.h>
using namespace std;

class Diem{
    private:
        float x, y;
    public:
        void input(){
            cout << "Nhap hoanh do: ";
            cin >> x;
            cout << "Nhap tung do: ";
            cin >> y;
        }
        void output(){
            cout << "(" << x << "," << y << ")";
        }

        float dodai(Diem d){
            return sqrt(pow(d.x - this->x, 2) * pow(d.y - this->y, 2));
        }
};  

int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    Diem diem[n+1];
    for(int i = 1; i <= n; i++){
        cout << "nhap diem thu " << i << endl;
        diem[i].input();
    }
    float dodai = diem[1].dodai(diem[n]);
    for(int i = 1; i < n; i++){
        dodai += diem[i].dodai(diem[i+1]);
    }
    cout << "do dai duong gap khuc la: " << dodai;
}