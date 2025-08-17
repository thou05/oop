/*
 Xây dựng lớp Môn_học có các thuộc tính (private): mã môn, tên môn, số
tín chỉ; Các phương thức (public): nhập, xuất, và các phương thức khác. Xây
dựng lớp DKHP (Đăng ký học phần) gồm có thuộc tính (private): mã sinh viên,
tên sinh viên và một mảng để lưu trữ thông tin các môn học sinh viên đăng ký.
Viết hàm main( ) thực hiện:
* Nhập danh sách m môn học cho trước và bản đăng ký học phần của n sinh viên.
* Hãy cho biết mỗi sinh viên đã đăng kí bao nhiều tín chỉ.
• Nhập vào một mã môn học và thống kê số sinh viên đã đăng kí môn học đó.
*/

#include <bits/stdc++.h>
using namespace std;

class Xe{
    private:
        string licensePlate;
        double weight;
    public:
        void inputInf(int i, string typeCar);
        void outputInf(int i, string typeCar);
        double &getWeight(){
            return weight;
        }
};

class XeBus: public Xe{
    private:
        int seat;
    public:
        void inputInf(int i, string typeCar);
};

class XeTai: public Xe{
    private:
        int seat;
    public:
        void inputInf(int i, string typeCar);
}