#include <bits/stdc++.h>

using namespace std;

class Complex{
    private: 
        float real;
        float img;

    public:
        //constructor
        Complex(): real(0), img(0) {}
        Complex(float real, float img = 0){
            this->real = real;
            this->img = img;
        }
        //Complex(float real, float img = 0): real(real), img(img) {}

        void input(){
            cout << "nhap phan thuc ";
            cin >> real;
            cout << "nhap phan ao ";
            cin >> img;
        }   

        void output(){
            cout << real;
            if(img > 0){
                cout << "+" << img <<"i\n";
            }else{
                cout << img <<"i\n";
            }
        }
        
        //ham cong 2 so phuc
        Complex add(Complex a, Complex b){
            Complex result;
            result.real = a.real + b.real;
            result.img = a.img + b.img;
            return result;
        }

        //toan tu cong
        Complex operator +(const Complex &a){
            Complex result;
            result.real = this->real + a.real;
            result.img = this->img + a.img;
            return result; 
        }   
        //khong dung &, Trả về đối tượng thay vì tham chiếu.
        //tai sao nhi??
};

int main(){
    Complex a, b;
    a.input(); a.output();
    b.input(); b.output();
    Complex c = c.add(a, b);
    c.output();
    Complex d, e;
    d = Complex(4, 5);
    e = d + a;
    e.output();
}