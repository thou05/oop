#include <bits/stdc++.h>

using namespace std;   

class DaThuc{
    private:
        int n;
        float *a;
    public:
        
        void nhap(){
            cout << "nhap n";
            cin >> n;
            a = new float[n+1];
            for(int i = 0; i <= n; i++){
                cin >> a[i];
            }
        }

        void xuat(){
            for(int i = 0; i <= n; i++){
                cout << a[i] << " ";
            }
            cout << "\n";
        }
        
        float giaTri(float t){
            float sum = 0;
            for(int i = 0; i <= n; i++){
                sum += a[i] * pow(t, i);
            }
            return sum;
        }

        ~DaThuc(){
            delete[] a;
        }


};

int main(){
    DaThuc test;
    test.nhap();
    test.xuat();
    cout << test.giaTri(5);


}