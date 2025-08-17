#include <bits/stdc++.h>
using namespace std;

class MatHang{
    private:
        int ma;
        string ten;
        string hangsx;
        int thoiGianBaoHanh;
        float donGia;
    public:
        MatHang(): ma(0), ten(" "), hangsx(""), thoiGianBaoHanh(0), donGia(0) {}
        void input(){
            cout << "nhap ma: ";
            cin >> ma;
            cout << "nhap ten: ";
            cin.ignore();
            getline(cin, ten);
            cout << "nhap hang san xuat: ";
            getline(cin, hangsx);
            cout << "thoi gian bao hanh: ";
            cin >> thoiGianBaoHanh;
            cout << "nhap don gia: ";
            cin >> donGia;
        }

        void output(){
            cout << "ma: " << ma << ", ten: "<< ten << ", hang sx: " << hangsx
                << ", thoi gian bao hanh: " << thoiGianBaoHanh << ", don gia: " << donGia;
        }

        float getGia(){
            return donGia;
        }

};

class DienThoai: public MatHang{
    private:
        string hdh;
    public:
        void input(){
            MatHang::input();
            cout << "Nhap he dieu hanh: ";
            cin.ignore();
            getline(cin, hdh);
        }
        void output(){
            MatHang::output();
            cout << ", he dieu hanh: " << hdh;
        }

        bool check(int a, int b){
            if(getGia() >= a && getGia() <= b){
                return 1;
            }
            return 0;
        }
};

int main(){
    int n;
    cout << "nhap so luong dien thoai: ";
    cin >> n;
    DienThoai dt[n+1];
    for(int i = 1; i <= n; i++){
        cout << "\nnhap thong tin dt thu " << i << endl;
        dt[i].input();
    }
    int a, b;
    do{
        cout << "nhap a: ";
        cin >> a;
        cout << "nhap b: ";
        cin >> b;
    }while(a < 0 || b < 0 || a > b);
    cout << "\ncac dien thoai co gia trong " << a << " va " << b << "la : \n";
    for(int i = 1; i <= n; i++){
        if(dt[i].check(a, b)){
            dt[i].output();
        }
    }
    int min = 1;
    for(int i = 2; i <= n; i++){
        if(dt[i].getGia() < dt[min].getGia()){
            min = i;
        }
    }
    cout << "\nnhung dien thoai re nhat o cua hanh la: \n";
    for(int i = 1; i <= n; i++){
        if(dt[i].getGia() == dt[min].getGia()){
            dt[i].output();
        }
    }
}