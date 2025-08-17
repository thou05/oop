#include <bits/stdc++.h>
using namespace std;

class Nguoi{
    private:
        string hoTen;
        int tuoi;
    public:
        void nhap(){
            cin.ignore(1);
            cout << "Ho ten: ";
            getline(cin, hoTen);
            cout << "Tuoi: ";
            cin >> tuoi;
        }

        string getName(){
            return hoTen;
        }

        int getAge(){
            return tuoi;
        }
};

class CauThu: public Nguoi{
    private: 
        int sbt;
        int sptd;
    public:
        void nhap(){
            Nguoi::nhap();
            cout << "So ban thang: ";
            cin >> sbt;
            cout << "So phut dau: ";
            cin >> sptd;
        }
        float tinhTien(){
            float t = 0;
            if(sptd > 300){
                t += 10;
            }
            t += 5 * sbt;
            return t;
        }
};

int main(){
    CauThu ct[100];
    int n;
    cout << "so cau thu: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        ct[i].nhap();
    }

    cout << endl << "Danh sach cau thu: " << endl;
    for(int i = 1; i <= n; i++){
        cout << ct[i].getName() << "  " << ct[i].getAge() << endl;
    }


}
