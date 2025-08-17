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
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
};

class Player: public Human{
    private:
        int goalNumber;
        int minutesPlayed;
    public:
        void input(){
            Human::input();
            cout << "enter number of goal: ";
            cin >> goalNumber;
            cout << "enter minutes played: ";
            cin >> minutesPlayed;
        }

        void output(){
            Human::output();
            cout << "Number of goal: " << goalNumber << " Minutes played: " << minutesPlayed;
        }
        int getGoalNum(){
            return goalNumber;
        }
        int getMinPlayed(){
            return minutesPlayed;
        }

        float tienThuong(){
            float t = 0;
            if(minutesPlayed > 300){
                t += 10;
            }
            t += 5 * goalNumber;
            return t;
        }
};



int main(){
    int n;
    cout << "enter number of players: ";
    cin >> n;
    Player *p;
    p = new Player[n+1];
    for(int i = 1; i <= n; i++){
        p[i].input(); // Access the object with dot operator
    }

    for(int i = 1; i <= n; i++){
        p[i].output();
    }


    //find max 
    int maxAge = p[1].getAge();
    Player tmp;
    for(int i = 2; i <= n; i++){
        if(p[i].getAge() > maxAge){
            maxAge = p[i].getAge();
            tmp = p[i];
        }
    }
    cout << "Player have most age: ";
    tmp.output();

    //tinh tien
    for(int i = 1; i <= n; i++){
        cout << "Cau thu thu "<<i<< endl;
        p[i].output();
        cout << "tien thuong: "<< p[i].tienThuong() << " trieu ";
    }
}