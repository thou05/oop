#include <bits/stdc++.h>

using namespace std;

typedef struct{
    string name;
    int year;
    int reference;
}Acticle;

void input(Acticle *a){
    cout << "enter name of acticle: ";
    cin.ignore();
    getline(cin, a->name);
    cout << "enter year public: ";
    cin >> a->year;
    cout << "enter quantity of reference ";
    cin >> a->reference;
}

void output(Acticle a){
    cout << "name: " << a.name << " ,year public: " << a.year << " ,quantity refer: "<< a.reference <<endl;
}
void sort(int n, Acticle a[]){
    Acticle tmp;
    for (int i = 1; i <= n - 1; i++){
        for(int j = i + 1; j <= n; j++){
            if (a[i].reference < a[j].reference || 
               (a[i].reference == a[j].reference && a[i].year > a[j].year)) {
                swap(a[i], a[j]); // Sử dụng swap để hoán đổi hai phần tử
            }
        }
    }
}   

int main(){
    int n;
    cout << "nhap so bai bao: ";
    cin >> n;
    Acticle a[n+1];
    for(int i = 1; i <= n; i++){
        cout << "nhap bai bao thu " << i << endl;
        input(&a[i]);
    }

    sort(n, a);
    for(int i = 1; i <= n; i++){
        output(a[i]);
    }


}