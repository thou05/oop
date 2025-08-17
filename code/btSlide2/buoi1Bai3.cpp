#include <bits/stdc++.h>
using namespace std;

void swap(float &a, float &b){
    float temp = a;
    a = b;
    b = temp;
}

void sort(int n, float a[]){
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}

int main(){
    int n;
    cout << "nhap n";
    cin >> n;
    float a[n];
    cout << "nhap mang: ";
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(n, a);
    cout << "sau khi sort: "<< endl;
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
}
