#include <bits/stdc++.h>

using namespace std;

class Retangle{
    private: 
        float leng;
        float wid;
    public:
        Retangle(): leng(0), wid(0) {}

        void input(){
            cout << "pls enter length: ";
            cin >> leng;
            cout << "pls enter width: ";
            cin >> wid;
        }

        float area() const {
            return leng * wid;
        }

        //getter
        float getLength() const {
            return leng;
        }
        float getWidth() const{
            return wid;
        }

};



int main(){
    int n;
    cout << "enter number of retangle: ";
    cin >> n;
    Retangle a[n+1];
    for(int i = 1; i <= n; i++){
        cout << "enter length and width of retangle " << i << endl;
        a[i].input();
    }

    //find max area
    int indexMax = 0;
    float maxArea = a[0].area();
    for(int i = 1; i <= n; i++){
        if(a[i].area() > maxArea){
            maxArea = a[i].area();
            indexMax = i;
        }
    }

    cout << "Retangle with the largest area: " << endl;
    cout << "length: " << a[indexMax].getLength() << "width: " << a[indexMax].getWidth();
    cout << "area: " << a[indexMax].area();
}