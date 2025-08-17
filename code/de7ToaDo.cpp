#include <bits/stdc++.h>
using namespace std;

class ToaDo{
    private:
        float x, y;
    public:
        ToaDo(){}
        float getX(){
            return x;
        }
        float getY(){
            return y;
        }
        void input(){
            cout << "nhap hoanh do ";
            cin >> x;
            cout << "nhap tung do ";
            cin >> y;
        }
        void output(){
            cout << "(" << x << ", " << y << ")";
        }
        float khoanhCachToaDo(){
            return sqrt(x * x + y * y);
        }
};

class DiemMau: public ToaDo{
    private:
        int mau;
    public: 
        DiemMau(){
            ToaDo();
        }
        void input(){
            ToaDo::input();
            do{
                cout << "nhap ma mau (1, 2, 3): ";
                cin >> mau;
            }while(mau > 3 && mau < 1);
        }
        void output(){
            ToaDo::output();
            cout << " mau: "<< mau << endl;
        }
        int getMau(){
            return mau;
        }
};

int main(){
    int n;
    cout << "nhap so toa do: ";
    cin >> n;
    DiemMau a[n+1];
    for(int i = 1; i <= n; i++){
        a[i].input();
    }
    int count[4] = {};
    for(int i = 1; i <= n; i++){
        if(a[i].getMau() == 1){
            count[1]++;
        }else if(a[i].getMau() == 2){
            count[2]++;
        }else{
            count[3]++;
        }
    }
    cout << "thong ke diem moi mau la: " << endl;
    for(int i = 1; i <= 3; i++){
        cout << "mau: " << i << ": " << count[i] << endl;
    }
    float max = a[1].khoanhCachToaDo();
    for(int i = 2; i <= n; i++){
        max = (max < a[i].khoanhCachToaDo()) ? a[i].khoanhCachToaDo() : max;
    }
    cout << "cac diem co khoang cach lon nhat den goc toa do la: " << endl;
    for(int i = 1; i <= n; i++){
        if(max == a[i].khoanhCachToaDo()){
            a[i].output();
        }
    }


}