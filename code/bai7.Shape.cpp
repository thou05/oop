#include <bits/stdc++.h>
using namespace std;

class Shape{
    private:
        float width, height;
    public:
        Shape() {}
        Shape(float wid, float hei){
            width = wid;
            height = hei;
        }
        float getWid(){
            return width;
        }
        float getHei(){
            return height;
        }
        void input(){
            cout << "enter width ";
            cin >> width;
            cout << "enter height : ";
            cin >> height;
        }
};

class Triangle: public Shape{
    public:
        float area(){
            return (getWid() * getHei() / 2); 
        }
};

class Retangle: public Shape{
    public: 
        Retangle(){}
        Retangle(float w, float h): Shape(w, h){
            
        }
        float area(){
            return getWid() * getHei();
        }
};

int main(){
    Retangle rect, r(3, 5);
    Triangle tri;
    cout << "input retangle: " << endl;
    rect.input();
    cout << "input triangle: " << endl;
    tri.input();
    cout << rect.area() << endl;
    cout << tri.area() << endl;
    cout << r.area() << endl;

}
