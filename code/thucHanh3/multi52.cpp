#include <bits/stdc++.h>
using namespace std;

class Person{
    private:
        char sex, name[25];
        int rollNo;

    public:
        void getInfo(){
            cout << "Name: "; cin >> name;
            cout << "So: "; cin >> rollNo;
            cout << "Gioi tinh (F/M): "; cin >> sex;
        }
        void display(){
            cout << name << "\t";
            cout << rollNo << "\t";
            cout << sex << "\t";
        }
};

class Academics{
    private:
        char courseName[25];
        int semester;
        char grade[3];
    public:
        void getInfo(){
            cout << "Ten khoa (BA/MBA/MCA etc)? ";
            cin >> courseName;
            cout << "Hoc ky (1/2/3/...)? ";
            cin >> semester;
            cout << "muc do (A,B,B+,B-..) ?";
            cin >> grade;
        }
        void display(){
            cout << courseName << "\t";
            cout << semester << "\t";
            cout << grade << "\t";
        }
};

class StuScholarship: public Person, public Academics{
    private:
        float amount;
    public:
        void getInfo(){
            Person::getInfo();
            Academics::getInfo();
            cout << "su ho tro: ";
            cin >> amount;
        }
        void display(){
            Person::display();
            Academics::display();
            cout << amount << endl;
        }
};

int main(){
    StuScholarship obj;
    cout << "Nhap cac thong tin sau: " << endl;
    obj.getInfo();
    cout << endl;
    cout << "Ten\tSo\tG/tinh\tKhoa\tHoc ky\tMuc do\tS/luong";
    cout<<endl;
    obj.display();
}


