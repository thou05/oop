#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "nhap n: " << endl;
    cin >> n;
    float a[n];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        if(a[i] > 0){
            cout << a[i] ;
        }
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        if(a[i] < 0){
            cout << a[i] ;
        }
    }
}