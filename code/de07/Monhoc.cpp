#include <bits/stdc++.h>
using namespace std;

class MonHoc{
    private: 
        int maMon;
        string tenMon;
        int tinchi;
    public:
        MonHoc(): maMon(0), tenMon(" "), tinchi(0) {}
        MonHoc(int ma, string ten, int tin): maMon(ma), tenMon(ten), tinchi(tin) {}
        void input(){
            cout << "Nhap ma: ";
            cin >> maMon;
            cout << "Nhap ten mon: ";
            cin.ignore();
            getline(cin, tenMon);
            cout << "Nhap so tin chi: ";
            cin >> tinchi;
        }
        void output(){  
            cout << maMon <<", " << tenMon <<", " << tinchi << endl;
        }
        int getMaMon(){
            return maMon;
        }
        int getTin(){
            return tinchi;
        }
};

class DKHP{
    private:
        int masv;
        string tensv;
        vector<MonHoc> dsmon;
    public:
        void input(vector<MonHoc> &dsMon){
            cout << "nhap ma sv: ";
            cin >> masv;
            cout << "nhap ten sv: ";
            cin.ignore();
            getline(cin, tensv);

            int somon;
            cout << "Nhap so mon sv dang ki: ";
            cin >> somon;

            for(int i = 0; i < somon; i++){
                int maMon;
                cout << "Nhap ma mon hoc thu " << i << ": ";
                cin >> maMon;
                
                int check = 0;
                for(auto mon: dsMon){
                    if(mon.getMaMon() == maMon){
                        dsmon.push_back(mon);
                        check = 1;
                    }
                }
                if(check == 0){
                    cout << "ma mon khong ton tai. Nhap lai!" << endl;
                    --i;
                }
            }
        }
        void output(){
            cout << masv << ", " << tensv << endl
                << "Danh sach mon dang ki: " << endl;
            for(auto &mon: dsmon){
                mon.output();
            }
        }

        int tongTin(){
            int sum = 0;
            for(auto mon: dsmon){
                sum += mon.getTin();
            }
            return sum;
        }

        bool dkMon(int maMon){
            for(auto mon: dsmon){
                if(mon.getMaMon() == maMon){
                    return true;
                }
            }
            return false;
        }

        string getTenSV(){
            return tensv;
        }


};

int main(){
    int m, n;
    cout << "Nhap so luong mon hoc: ";
    cin >> m;
    vector<MonHoc> dsMon(m);
    for(int i = 0; i < m; i++){
        cout << "Nhap thong tin mon hoc thu " << i << endl;
        dsMon[i].input();
    }
    cout << "Nhap so luong sv: ";
    cin >> n;
    vector<DKHP> dsDK(n);
    for(int i = 0; i < n; i++){
        cout << "Nhap thong tin sv thu " << i << endl;
        dsDK[i].input(dsMon);
    }

    cout << "Thong ke so tin cua sinh vien \n";
    for(auto dk: dsDK){
        dk.output();
        cout << "Tong so tin: " << dk.tongTin() << endl;
    }

    int maMon;
    int sum = 0;
    cout << "Nhap ma mon hoc: ";
    cin >> maMon;
    for(auto dk: dsDK){
        if(dk.dkMon(maMon)){
            sum++;
        }
    }
    cout << "so sv da dang ki: " << sum;
}