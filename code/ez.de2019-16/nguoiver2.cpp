#include <bits/stdc++.h>
using namespace std;

class Nguoi{
    private:
        string hoten;
        int tuoi;
    public:
        void input(){
            cout << "Nhap ho ten: ";
            cin.ignore();
            getline(cin, hoten);
            cout << "Nhap tuoi: ";
            cin >> tuoi;
        }
        void output(){
            cout << hoten << ", " << tuoi << " tuoi";
        }
        string getName(){
            return hoten;
        }

};

class QLNV: public Nguoi{
    private:
        int snct;
        double luong;
    public:
        void input(){
            Nguoi::input();
            cout << "Nhap snct: ";
            cin >> snct;
            cout << "Nhap luong: ";
            cin >> luong;
        }
        void output(){
            Nguoi::output();
            cout << snct << " nam cong tac, " << luong << " trieu\n"; 
        }

        double getLuong(){
            return luong;
        }

        int getNam(){
            return snct;
        }
};

int main(){
    int n;
    cout << "Nhap so nhan vien: ";
    cin >> n;
    QLNV nv[n+1];
    for(int i = 1; i <= n; i++){
        nv[i].input();
    }

    double sum = 0;
    int count = 0;
    for(int i = 1; i <= n; i++){
        sum += nv[i].getLuong();
        count++;
    }
    if(count == 0){
        cout << "Khong co nv nao!\n";
    }else{
        cout << "Tien luong tb cua " << n << " nhan vien: " << sum / count << endl;
    }

    int max = 1;
    for(int i = 2; i <= n; i++){
        if(nv[i].getNam() > nv[max].getNam()){
            max = i;
        }
    }
    cout << "Nv co so nam cong tac nhieu nhat: \n";
    //thieu la in ra so nam trung nhau
    for(int i = 1; i <= n; i++){
        if(nv[i].getNam() == nv[max].getNam()){
            nv[i].output();
        }
    }
}