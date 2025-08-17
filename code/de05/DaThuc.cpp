// bug chua fix xong

#include <bits/stdc++.h>

using namespace std;

class DaThuc{
    private:
        int n;
        int *a;
    public:
        DaThuc(): n(0), a(NULL) {}
        DaThuc(int n): n(n), a(new int[n+1]) {}
        ~DaThuc(){
            delete[] a;
        }
        void input(){

            a = new int[n+1];
            for(int i = 0; i <= n; i++){
                cout << "Nhap a[" << i << "]: ";
                cin >> a[i];
            }
        }
        void output(){
            cout << a[0] << " + ";
            for(int i = 1; i <= n - 1; i++){
                cout << a[i] << "x^" << i << " + ";
            }
            cout << a[n] << "x^" << n << endl;
        }

        DaThuc operator+(DaThuc q){
            DaThuc result;
            result.n = max(this->n, q.n);
            result.a = new int[result.n + 1];
            for(int i = 0; i <= result.n; i++){
                result.a[i] = (i <= this->n ? this->a[i] : 0) + (i <= q.n ? q.a[i] : 0);
            }
            return result;
        }

};

int main(){
    DaThuc p, q, sum;
    cout << "nhap he so da thuc p: \n";
    p.input();
    cout << "nhap he so da thuc q: \n";
    q.input();
    
    sum = p + q;
    sum.output();
   
}   