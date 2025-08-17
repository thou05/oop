#include <iostream>

using namespace std;

int isNguyenTo(int n){
    if(n<2){
        return 0;
    }
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout << "nhap n" <<endl;
    cin >> n;

    cout << "cac so nguyen to <= " << n << " la: ";
    for(int i = 2; i <= n; i++){
        if(isNguyenTo(i)){
            cout << i << " ";
        }
    }
    
}