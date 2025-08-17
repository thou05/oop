/*
Xây dựng lớp Xe, trong đó có các thuộc tính (private): Biển số và trọng lượng
của xe. Xây dựng các lớp dẫn xuất từ lớp Xe: Lớp Xe. Bus có thêm thuộc tỉnh Số chỗ
ngồi và lớp Xe. Tại có thêm thuộc tỉnh Tải trọng. Hãy viết chương trình:
* Nhập thông tin cho n xe buýt và m xe tải.
* In danh sách các xe có trọng lượng lớn hơn 3 tấn, trong đó các xe tải có tài trong
không quá 15 tấn và các xe bus có nhiều hơn 24 chỗ ngồi (trong trường hợp không
có thể cần đưa ra thông báo).
* Tìm các thông tin về một xe theo biển số được nhập từ bàn phim (trong trường hợp
không có thể cần đưa ra thông báo).
*/ 

#include <bits/stdc++.h>

using namespace std;

class Xe{
    private:
        string bienSo;
        double trongLuong;
    public:
        void input(){
            cout << "Nhap bien so xe: ";
            cin.ignore();
            getline(cin, bienSo);
            cout << "Nhap trong luong xe: ";
            cin >> trongLuong;
        }

        virtual void output(){
            cout << "Bien so: " << bienSo << ", trong luong: " << trongLuong << " tan";
        }
        string getBienSo(){
            return bienSo;
        }
        float getTrongLuong(){
            return trongLuong;
        }

        virtual bool check() = 0;
};

class XeBus: public Xe{
    private:
        int soCho;
    public:
        void input(){
            Xe::input();
            cout << "Nhap so cho xe: ";
            cin >> soCho;
        }

        void output() override{
            Xe::output();
            cout << ", so cho ngoi: " << soCho << endl;
        }
       
        bool check() override{
            return (getTrongLuong() > 3 && soCho > 24);
        }
};

class XeTai: public Xe{
    private:
        float taiTrong;
    public:
        void input(){
            Xe::input();
            cout << "Nhap tai trong cua xe: ";
            cin >> taiTrong;
        }

        void output() override{
            Xe::output();
            cout << ", so tai trong: " << taiTrong << " tan" << endl;
        }
       

        bool check() override{
            return (getTrongLuong() > 3 && taiTrong <= 15);
        }
};

int main(){
    int n, m;
    cout << "Nhap so luong xe buyt: "; cin >> n;
    XeBus bus[n+1];
    cout << "---Nhap thong tin xe bus---" << endl;
    for(int i = 1; i <= n; i++){
        cout << "Nhap xe thu " << i << endl;;
        bus[i].input();
    }
    cout << "---Nhap thong tin xe tai---" << endl;
    cout << endl << "Nhap so luong xe tai: "; cin >> m;
    XeTai tai[m+1];
    for(int i = 1; i <= m; i++){
        cout << "Nhap xe thu " << i << endl;
        tai[i].input();
    }

    cout << endl << "Danh sach xe co trong luong lon hon 3 tan: " << endl;
    bool check = false;

    for(int i = 1; i <= n; i++){
        if(bus[i].check()){
            bus[i].output();
            check = true;
        }
    }

    for(int i = 1; i <= m; i++){
        if(tai[i].check()){
            tai[i].output();
            check = true;
        }
    }

    if(!check){
        cout << "Khong co xe nao thoa man dieu kien!!" << endl;
    }

    string timBienSo;
    cout << "Nhap bien so xe can tim: ";
    cin.ignore();
    getline(cin, timBienSo);

    bool timThayXe = false;

    for(int i = 1; i <= n; i++){
        if(bus[i].getBienSo() == timBienSo){
            cout << "Thong tin xe bus: ";
            bus[i].output();
            timThayXe = true;
            break;
        }
    }

    if(!timThayXe){
        for(int i = 1; i <= m; i++){
            if(tai[i].getBienSo() == timBienSo){
                cout << "Thong tin xe tai: ";
                tai[i].output();
                timThayXe = true;
                break;
            }
        }
    }

    if(!timThayXe){
        cout << "Khong tim thay xe voi bien so: " << timBienSo;
    }

}
