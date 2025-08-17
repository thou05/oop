#include <bits/stdc++.h>
using namespace std;

class DaThuc{
    private:
        int n;
        float *a;
    public:
        //constructor
        DaThuc(): n(0), a(NULL) {}
        DaThuc(int n){
            this->n = n;
            a = new float[n+1];
            for(int i = 1; i <= n; i++){
                cout << "a[" << i <<"]";
                cin >> a[i];
            }
        }
        ~DaThuc(){
            delete a;
        }
        //copy constructor
        DaThuc(const DaThuc &d){
            n = d.n;
            a = new float[n];
            for(int i = 1; i <= n; i++){
                a[i] = d.a[i];
            }
        }
        //toan tu gan  
        DaThuc &operator =(DaThuc &d){
            n = d.n;
            a = new float[n+1];
            for(int i = 1; i <= n; i++){
                a[i] = d.a[i];
            }
            return *this;
        }
        DaThuc &operator +(const DaThuc &d){
            DaThuc kq;
            int k;
            k = n > d.n ? n : d.n;
            kq.a = new float[n+1];
            for(int i = 1; i <= n; i++){
                if( i <= n && i <= d.n){
                    kq.a[i] = a[i] + d.a[i];
                }else if(i <= n){
                    kq.a[i] = a[i];
                }else{
                    kq.a[i] = d.a[i];
                }
            }

        }
        friend istream &operator >>(istream &is, DaThuc &d){
            for(int i = 1; i <= d.n; i++){
                cout << "a[" << i <<"]: ";
                is >> d.a[i];
            }
            return is;
        }
        friend ostream &operator <<(ostream &os, DaThuc d){
            for(int i = 1; i <= d.n; i++){
                os << d.a[i] << " ";
            }
            return os;
        }

};
int main(){
    DaThuc x(3), y;
    cout << "He so da thuc tren: \n";
    cout << x;

}