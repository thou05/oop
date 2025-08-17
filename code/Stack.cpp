#include <bits/stdc++.h>
using namespace std;

template<class T>
class Stack{
    private:
        T data[100];
        int top = 0;
    public:
        void push(T value){
            data[++top] = value;
        }
        T pop(){
            return data[top--];
        }
};

int main(){
    Stack <int> s;
    s.push(3);
    s.push(2);
    s.push(9);
    // s.pop();
    cout << s.pop() << endl;
    
}