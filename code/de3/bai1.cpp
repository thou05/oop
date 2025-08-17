/*

*/
#include <bits/stdc++.h>
using namespace std;

class Ds_nguyen{
    private:
        int n;
        int *a;
    public:
        Ds_nguyen(){}
        ~Ds_nguyen(){
            delete []a;
        }
        int getN(){
            return n;
        }

        friend istream &operator >>(istream &is, Ds_nguyen &d){
            cout << "Nhap so phan tu: ";
            is >> d.n;
            d.a = new int[d.n + 1];
            cout << endl << "Nhap day so: " ;
            for(int i = 1; i <= d.n; i++){
                is >> d.a[i];
            }
        }
        friend ostream &operator <<(ostream &os, Ds_nguyen &d){

            for(int i = 1; i <= d.n; i++){
                os << d.a[i] << "  ";
            }
        }

        double tinhTrungBinhCong(){
            int sum = 0, count = 0;
            for(int i = 1; i <= n; i++){
                if(a[i] > 0){
                    sum += a[i];
                    count++;
                }
            }
            return count > 0 ? (double) sum / count : 0;
        }

        bool laSoChinhPhuong(int x){
            int canBacHai = (int)(sqrt(x)); 
            return canBacHai * canBacHai == x;
        }

        int demSoChinhPhuong(){
            int count = 0;
            for(int i = 1; i <= n; i++){
                if(laSoChinhPhuong(a[i])){
                    count++;
                }
            }
            return count;
        }
    
};

int main(){
    Ds_nguyen s;
    cin >> s;
    cout << "Day so vua nhap: " ;
    cout << s;
    
    cout << "Trung binh cong cac phan tu duong: " << s.tinhTrungBinhCong() << endl;
    cout << "So so chinh phuong: " << s.demSoChinhPhuong();


}   

