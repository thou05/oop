#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int c;
    cout << setw(10) << "Celcius" << setw(12) << "Fareheit" << endl;
    cout << setprecision(1) << fixed;
    for(c = 10; c <= 40; c+=2){
        cout << setw(10) << c << setw(12) << c * 9/5 + 32 << endl;
    }
    
}