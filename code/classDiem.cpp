#include <bits/stdc++.h>

using namespace std;

class Diem{
    private:
        float x, y;
    public:
        Diem(): x(0), y(0) {}
        Diem(float x, float y){
            this->x = x;
            this->y = y;
        }
        Diem (const Diem &a){
            x = a.x;
            y = a.y;
        }

        float khoangCachToaDo(){
            return sqrt(x * x + y * y);
        }
        float khoangCachHaiDiem(Diem a, Diem b){
            return sqrt(pow(a.x-b.x, 2) + pow(a.y - b.y, 2));
        }

        bool operator ==(const Diem &a) const{
            return this = a;
        }
        

};