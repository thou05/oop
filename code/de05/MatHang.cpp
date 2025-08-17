#include <bits/stdc++.h>
using namespace std;

class MatHang{
    private:
        string ma;
        float gia;
    public:
        MatHang(): ma(""), gia(0) {}

        void input(){
            cout << "nhap ma: ";
            cin.ignore();
            getline(cin, ma);
            cout << "nhap gia: ";
            cin >> gia;
        }

        float getGia(){
            return gia;
        }
        
        string getMa(){
            return ma;
        }
};

class HoaDon{
    private:
        string ma;
        int soluong;
        string ngayban;
    public:
        HoaDon(): ma(""), soluong(0), ngayban("") {}

        void input(){
            cout << "nhap ma hang: ";
            cin.ignore();
            getline(cin, ma);
            cout << "nhap so luong: ";
            cin >> soluong;
            cout << "nhap ngay ban: ";
            cin.ignore();
            getline(cin, ngayban);
        }

        string getMa(){
            return ma;
        }
        
        int getSL(){
            return soluong;
        }

        string getNgay(){
            return ngayban;
        }

};

double tinhTienNgay(vector<HoaDon> &hoadons, vector<MatHang> &mathangs, string &ngay){
    double tongTien = 0;
    for(auto &hoadon : hoadons){
        if(hoadon.getNgay() == ngay){
            for(auto &mathang : mathangs){
                if(hoadon.getMa() == mathang.getMa()){
                    tongTien += hoadon.getSL() * mathang.getGia();
                }
            }
        }
    }
    return tongTien;
}

int main(){
    int m, n;
    cout << "nhap so luong mat hang: ";
    cin >> m;
    MatHang mh[m+1];
    mh->input();
    cout << "nhap n hoa don: ";
    cin >> n;
    HoaDon hd[n+1];
    hd->input();

    int count = 0;
    for(int i = 0; i < n;i++){
        if(hd[i].getSL() > 10){
            count++;
        }
    }
    cout << "so hoa don co so luong lon hon 10: " << count;

    string checkNgay;
    cout << "nhap ngay muon tinh tien: ";
    cin.ignore();
    getline(cin, checkNgay);
    for(int i = 0; i < n; i++){
        
    }
}