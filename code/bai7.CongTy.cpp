//note: nhung // la co the co hoac khong, khong sai 

#include <bits/stdc++.h>
using namespace std;

class CongTy{
    private:
        string name;
        int yearEstablish;
    public:
        //CongTy(): name("Unknow"), yearEstablish(0) {}
        // CongTy(string name, int yearEstablish){
        //     this->name = name;
        //     this->yearEstablish = yearEstablish;
        // }
        void input(){
            cin.ignore(1);
            cout << "enter name: ";
            getline(cin, name);
            cout << "enter year: ";
            cin >> yearEstablish;
        }
        // string setName(string name){
        //     this->name = name;
        // }
        // string setYear(int year){
        //     this->yearEstablish = year;
        // }
        string getName(){
            return name;
        }
        int getYear(){
            return yearEstablish;
        }
};

class CTPM: public CongTy{
    private:
        int numDev;
    public:
        //CTPM(){}
        // CTPM(string name, int yearEstablish, int numDev): CongTy(name, yearEstablish){
        //     this->numDev = numDev;
        // }
        void inputPM(){
            input();
            cout << "enter number of dev: ";
            cin >> numDev;
        }
        int getNumDev(){
            return numDev;
        }
};

class CTVT: public CongTy{
    private:
        int numCar;
    public: 
        //CTVT(){}  
        // CTVT(string name, int yearEstablish, int numCar): CongTy(name, yearEstablish){
        //     this->numCar = numCar;
        // }

        void inputVT(){
            input();
            cout << "enter number of car: ";
            cin >> numCar;
        }
        int getNumCar(){
            return numCar;
        }

};

int main(){
    int n, m; 
    cout << "enter number of CTPM: ";
    cin >> n;
    cout << "enter number of CTVT: ";
    cin >> m;
    CTPM *p;
    p = new CTPM[n+1];
    for(int i = 1; i <= n; i++){
        cout << "enter infor of ctpm " << i << endl;
        p[i].inputPM();
    }
    CTVT *v;
    v = new CTVT[m+1];
    for(int i = 1; i <= m; i++){
        cout << "enter infor of ctvt "<< i << endl;
        v[i].inputVT();
    }
    cout << "ctpm have year establish after 2000 and more than 20 dev: "<< endl;
    for(int i = 1; i <= n; i++){
        if(p[i].getYear() > 2000 && p[i].getNumDev()){
            cout << "name: " << p[i].getName() << endl;
        }
    }
    cout << "ctvt have year establish before 2000 and not more than 10 car" << endl;
    for(int i = 1; i <= m; i++){
        if(v[i].getYear() < 2000 && v[i].getNumCar() <= 10){
            cout << "name: " << v[i].getName() << endl;
        }
    }

}