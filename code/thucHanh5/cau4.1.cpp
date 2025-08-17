#include <bits/stdc++.h>
using namespace std;

class Dayso{
    private:
        int n;
        int *a;
    public:
        Dayso(){}
        ~Dayso(){
            delete a;
        }
        int getSize();
        friend istream &operator >>(istream &is, Dayso &s);
        friend ostream &operator <<(ostream &os, Dayso &s);
        
};

int Dayso::getSize(){
    return n;
}

istream &operator >>(istream &is, Dayso &s){
    cout << "nhap n: ";
    is >> s.n;
    s.a = new int[s.n + 1];
    cout << "Nhap day so: ";
    for(int i = 1; i <= s.n; i++){
        is >> s.a[i];
    }
    return is;
}

ostream &operator <<(ostream &os, Dayso &s){
    for(int i = 1; i <= s.n; i++){
        os << s.a[i] << " ";
    }
    return os;
}

int main(){
    Dayso s;
    cin >> s;
    cout << s;
}
