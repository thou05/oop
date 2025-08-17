#include <bits/stdc++.h>
using namespace std;

class Nguoi{
    private:
        string hoTen;
        int tuoi;
    public:
        void input(){
            cout << "Nhap ho ten: ";
            cin.ignore();
            getline(cin, hoTen);
            cout << "Nhap tuoi: ";
            cin >> tuoi;
        }
        void output(){
            cout << "Ten: " << hoTen  << ", tuoi: " << tuoi;
        }

};

class QLNV: public Nguoi{
    private:
        int snct;
        float luong;
    public:
        void input(){
            Nguoi::input();
            cout << "Nhap so nam cong tac: ";
            cin >> snct;
            cout << "Nhap tien luong (trieu) : ";
            cin >> luong;
        }

        void output(){
            Nguoi::output();
            cout << ", so nam cong tac: " << snct << ", luong: " << luong << " trieu" << endl;
        }

        int getSnct(){
            return snct;
        }
        float getLuong(){
            return luong;
        }
};

int main(){
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    QLNV *q = new QLNV[n+1];
    for(int i = 1; i <= n; i++){
        cout << "Nhap nhan vien thu " << i << endl;
        q[i].input();
    }
    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum += q[i].getLuong();
    }
    cout << "Tien luong TB cua n nhan vien: " << sum / n << " trieu\n";
    int max = 1;
    for(int i = 2; i <= n; i++){
        if(q[i].getSnct() > q[max].getSnct()){
            max = i;
        }
    }

    cout << "\nCac nhan vien co so nam cong tac nhieu nhat: \n";
    for(int i = 1; i <= n; i++){
        if(q[i].getSnct() == q[max].getSnct()){
            q[i].output();
        }
    }
}