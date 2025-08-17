#include <bits/stdc++.h>
using namespace std;

class Hang{
    private:
        int ma;
        string ten;
        int soluong;
        float gia;
    public:
        Hang(): ma(0), ten("unknown"), soluong(0), gia(0) {}
        void input(){
            cout << "nhap ma: ";
            cin >> ma;
            cout << "nhap ten hang: ";
            cin.ignore();
            getline(cin, ten);
            cout << "nhap so luong: ";
            cin >> soluong;
            cout << "nhap don gia: ";
            cin >> gia;
        }
        void output(){
            cout << "ma: " << ma << ", ten: " << ten << ", so luong: " << soluong << ", gia: " << gia << " trieu dong";
        }
        float getGia(){
            return gia;
        }
};

class MayTinh: public Hang{
    private:
        string hdh;
        float trongluong;
    public:
        MayTinh(): hdh("unknow"), trongluong(0) {}
        void input(){
            Hang::input();
            cout << "nhap he dieu hanh: ";
            cin.ignore();
            getline(cin, hdh);
            cout << "trong luong: ";
            cin >> trongluong;
        }

        void output(){
            Hang::output();
            cout << ", he dieu hanh: " << hdh << ", trong luong: " << trongluong << " kg\n";
        }

        bool check(){
            if(hdh == "win" && trongluong <= 2.5){
                return 1;
            }
            return 0;
        }
        string getHDH(){
            return hdh;
        }
};

int main(){
    int n;
    cout << "nhap n: ";
    cin >> n;
    MayTinh a[n+1];
    for(int i = 1; i <= n; i++){
        cout << "nhap may tinh thu " << i << endl;
        a[i].input();
    }

    int count = 0;
    cout << "\nmay win co trong luong khong qua 2.5kg: \n";
    for(int i = 1; i <= n; i++){
        if(a[i].check()){
            a[i].output();
        }
    }
    if(count == 0){
        cout << "khong co may win nao trong luong khong qua 2.5kg\n";
    }
    
    int min = 0;
    for(int i = 1; i <= n; i++){
        if(a[i].getHDH() == "mac"){
            min = i;
            // return 0;
        }
    }
    cout << "\nmay tinh mac co gia re nhat: \n";
    if(min == 0){
        cout << "khong co may hdh mac";
        return 0;
    }else{
        for(int i = 1; i <= n; i++){
            if(a[i].getGia() < a[min].getGia() && a[i].getHDH() == "mac"){
                min = i;
            }
        }
        a[min].output();
    }
    
}