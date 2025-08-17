#include <bits/stdc++.h>
using namespace std;

class DaThuc{
    private:
        int bac;
        float *a;
    public:
        DaThuc(): bac(0), a(NULL) {}
        ~DaThuc(){
            delete[] a;
        }
        

};