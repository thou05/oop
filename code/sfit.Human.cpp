#include <bits/stdc++.h>
using namespace std;

class Human{
    private:
        string name;
        int age;
    public:
        void input(){
            cout << "enter name plsss: ";
            getchar();
            getline(cin, name);
            
            cout << "plss enter age: ";
            cin >> age;
        }
        void output(){
            cout << "Name: " << name << ", age: " << age << endl;
        }
};

class Employee : public Human{
    private:
        int serviceYear;
        float salaryFactor;

    public:
        void input(){
            //cout 
            cin >> serviceYear >> salaryFactor;
        }
        int getServiceYear(){
            return serviceYear;
        }
        double salaryCal(){
            double salary = 1.5 * salaryFactor + 0.2 * serviceYear;
            return salary;
        }

};



int main(){
    int n;
    cout << "enter number of employee: ";
    cin >> n;
    Employee *h;
    h = new Employee[n+1];
    for(int i = 1; i <= n; i++){
        h[i].input(); // Access the object with dot operator
    }

    for(int i = 1; i <= n; i++){
        h[i].output();
    }


    //find max 
    int maxYear = h[1].getServiceYear();
    Employee tmp;
    for(int i = 2; i <= n; i++){
        if(h[i].getServiceYear() > maxYear){
            maxYear = h[i].getServiceYear();
            tmp = h[i];
        }
    }
    cout << "Employee have most year of service: ";
    tmp.output();
}