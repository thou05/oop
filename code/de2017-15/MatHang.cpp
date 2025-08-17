#include <bits/stdc++.h>
using namespace std;

class MatHang{
    private:
        string ma;
        string ten;
        string nsx;
        int soLuong;
        float gia;
    public:
        MatHang() : ma("unknown"), ten("unknown"), nsx("unknown"), soLuong(0), gia(0) {}
        void input(){
            cout << "nhap ma: ";
            cin >> ma;
            cout << "nhap ten: ";
            cin.ignore();
            getline(cin, ten);
            cout << "nhap nha san xuat: ";
            getline(cin, nsx);
            cout << "nhap so luong: ";
            cin >> soLuong;
            cout << "nhap gia (nghin): ";
            cin >> gia;
        }

        void output(){
            cout << ma << setw(20) << ten << setw(10) << nsx << setw(10) << soLuong << setw(10) << gia << " nghin dong ";
        }

        string getMa(){
            return ma;
        }

        string getTen(){
            return ten;
        }

        float getGia(){
            return gia;
        }
};

class MayTinh: public MatHang{
    private:
        string cpu;
        string hdh;
        float trongLuong;
    public:
        void input(){
            MatHang::input();
            cout << "Nhap loai CPU: ";
            cin.ignore();
            getline(cin, cpu);
            cout << "Nhap he dieu hanh: ";
            getline(cin, hdh);
            cout << "Nhap trong luong (kg): ";
            cin >> trongLuong;
        }

        void output(){
            MatHang::output();
            cout << setw(10) << cpu << setw(10) << hdh << setw(10) << trongLuong << " kg\n";
        }

        bool check(string ten){
            return this->getTen() == ten || this->getMa() == ten;
        }

};

int main(){
    int n;
    cout << "Nhap so luong may tinh: ";
    cin >> n;
    MayTinh *mt = new MayTinh[n+1];
    for(int i = 1; i <= n; i++){
        mt[i].input();
    }

    string tim;
    cout << "Nhap ma hoac ten may tinh: ";
    cin.ignore();
    getline(cin, tim);
    //cach cua thao
    // for(int i = 1; i <= n; i++){
    //     if(mt[i].getMa() == tim || mt[i].getTen() == tim){
    //         mt[i].output();
    //     }
    // }

    // cach 2
    for(int i = 1; i <= n; i++){
        if(mt[i].check(tim)){
            mt[i].output();
        }
    }
    
    int max = 1;
    for(int i = 2; i <= n; i++){
        if(mt[i].getGia() > mt[max].getGia()){
            max = i;
        }
    }
    cout << "\nCac may tinh co don gia cao nhat: \n";
    for(int i = 1; i <= n; i++){
        if(mt[i].getGia() == mt[max].getGia()){
            mt[i].output();
        }
    }

}