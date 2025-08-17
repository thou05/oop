#include <bits/stdc++.h>
using namespace std;

class MonHoc{
    private:
        int maMon;
        string tenMon;
        int soTinChi;
    public:
        void input(){
            cout << "Nhap ma mon: ";
            cin >> maMon;
            cout << "Nhap tenMon mon: ";
            cin.ignore();
            getline(cin, tenMon);
            cout << "Nhap so tin chi: ";
            cin >> soTinChi;
        }

        void output(){  
            cout << "Ma mon: " << maMon << "\tTen: " << tenMon << "\tSo tin chi: " << soTinChi << endl;
        }

        int getSoTin(){
            return soTinChi;
        }
        int getMaMon(){
            return maMon;
        }
        void setMaMon(int ma){
            this->maMon = ma;
        }
};


class DKHP{
    private:
        int maSinhVien;
        string tenSinhVien;
        MonHoc *dsMon;
    public:
        DKHP() : dsMon(NULL), soMon(0) {}
        ~DKHP(){
            delete []dsMon;
        }
        void input(){
            cout << "Nhap ma sinh vien: ";
            cin >> maSinhVien;
            cout << "Nhap ten sinh vien: ";
            cin.ignore();
            getline(cin, tenSinhVien);
            
            
            dsMon = new MonHoc[soMon];

            for(int i = 1; i <= soMon; i++){

                cout << "Nhap ma mon hoc thu " << i << ": ";
                cin >> 
            }
        }

};

int main(){
    int m, n;
    cout << "Nhap so mon hoc: ";
    cin >> m;
    cout << endl << "Nhap so sinh vien: ";
    cin >> n;

}


#include <bits/stdc++.h>
#define Thang main
using namespace std;

class Mon_hoc {
    string maMon;
    string tenMon;
    int soTC;
public:
    Mon_hoc() {}
    friend istream& operator >> (istream& is, Mon_hoc& m) {
        cout << "\nNhap ma mon hoc: ";
        is >> m.maMon;
        cout << "\nNhap ten sach: ";
        is.ignore();
        getline(is, m.tenMon);
        cout << "\nNhap so tin chi: ";
        is >> m.soTC;
        return is;
    }
    friend ostream& operator << (ostream& os, const Mon_hoc& m) {
        os << setw(5) << "Ma mon: " << m.maMon << "\n";
        os << setw(5) << "Ten mon: " << m.tenMon << "\n";
        os << setw(5) << "So tin chi: " << m.soTC << "\n";
        return os;
    }
    string getMaMon () const{
        return maMon;
    }
    int getTinChi () const{
        return soTC;    
    }
};

class DKHP {
    string maSV;
    string tenSV;
    vector<Mon_hoc> dsmon;
public:
    DKHP(){}
    friend istream& operator >> (istream& is, DKHP& s){
        cout << "Nhap ma sinh vien: ";
        is >> s.maSV;
        is.ignore();
        cout << "\nNhap ten sinh vien: ";
        getline (is, s.tenSV);
        int soMon;
        cout << "\nNhap so luong mon hoc dang ky: ";
        is >> soMon;
        s.dsmon.resize(soMon);
        for (int i = 0; i < soMon; i++) {
            cout << "\nNhap mon hoc thu " << i + 1 << " :\n";
            is >> s.dsmon[i];
        }
        return is;
    }
    friend ostream& operator << (ostream& os, const DKHP& s) {
        os << setw(5) << "Ma sinh vien: " << s.maSV << endl;
        os << setw(5) << "Ten sinh vien: " << s.tenSV << endl;
        for (const Mon_hoc& mon : s.dsmon) {
            os << mon << endl;
        } 
        return os;
    }
    int SoTChi () const {
        int tongTC = 0;
        for (const Mon_hoc& mon : dsmon) {
            tongTC += mon.getTinChi();
        }
        return tongTC;
    }
    bool daDKy (const string& maMon) const {
        for (const Mon_hoc& mon : dsmon) {
            if (mon.getMaMon() == maMon) {
                return true;
            }
        }
        return false;
    }
};
Thang () {
    int n, m;
    cout << "Nhap so luong mon hoc: ";
    cin >> m;
    vector<Mon_hoc> dsMonhoc(m);
    for (int i = 0; i < m; i++) {
        cout << "Nhap thong tin mon hoc thu " << i + 1 << ":\n";
        cin >> dsMonhoc[i];
    }

    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    vector<DKHP> dsDKHP(n);
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu: " << i + 1 << ":\n";
        cin >> dsDKHP[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien " << dsDKHP[i] << " da dang ky " << dsDKHP[i].SoTChi() << " tin chi." << endl;
    }

    string maMonCanTim;
    cout << "\nNhap ma mon hoc can tim: ";
    cin >> maMonCanTim;

    int soSVDky  = 0;
    for (const DKHP& dsmon : dsDKHP) {
        if (dsmon.daDKy(maMonCanTim)) {
            soSVDky++;
        }
    }
    cout << "So sinh vien da dang ky mon hoc co ma " << maMonCanTim << ": " << soSVDky << endl;
}
