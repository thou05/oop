#include <bits/stdc++.h>
using namespace std;

class Book{
    private:
        int ma;
        string ten;
        string tacgia;
        int namxuat;
        string nxb;
    public:
        void input(){
            cout << "Nhap ma: ";
            cin >> ma;
            cout << "Nhap ten sach: ";
            cin.ignore();
            getline(cin, ten);
            cout << "Nhap ten tac gia: ";
            cin.ignore();
            getline(cin, tacgia);
            cout << "Nhap nam xuat ban: ";
            cin >> namxuat;
            cout << "Nhap nha xuat ban: ";
            cin.ignore();
            getline(cin, nxb);
        }
        void output(){
            cout << "ma: " << ma << ", ten: "<< ten << ", tac gia: "
                << tacgia << ", nam xuat ban: " << namxuat << ", nxb: "
                << nxb << endl;
        }
        int getNamXB(){
            return namxuat;
        }
};

class QLBook{
    private:
        int n;
        Book *ds;
    public:
        void input(){
            cout << "Nhap n: ";
            cin >> n;
            ds = new Book[n+1];
            for(int i = 1; i <= n; i++){
                ds[i].input();
            }
        }
        void putput(){
            for(int i = 1; i <= n; i++){
                ds[i].output();
                cout << endl;
            }
        }

        void timNam(int nam){
            int check = 0;
            cout << "Sach xuat ban nam " << nam << endl;
            for(int i = 1; i <= n; i++){
                if(ds[i].getNamXB() == nam){
                    ds[i].output();
                    check = 1;
                }
            }
            if(check == 0){
                cout << "Khong co sach xuat ban nam nay\n";
            }
        }
        void sort(){
            for(int i = 1; i <= n - 1; i++){
                for(int j = 1; j <= n - i - 1; j++){
                    if(ds[j].getNamXB() < ds[j+1].getNamXB()){
                        swap(ds[j], ds[j+1]);
                    }
                }
            }
            cout << "Danh sách được sắp xếp tăng dần theo năm xuất bản: \n";
            putput();
        }
        int getN(){
            return n;
        }
};

int main(){
    QLBook ql;
    ql.input();
    int nam;
    cout << "Nhap nam: ";
    cin >> nam;
    ql.timNam(nam);
    ql.sort();
}