/*
Xây dựng lớp QLH (quản lý hàng), gồm các thuộc tính (private): mã hàng, tên hàng, xuất
xứ, loại hàng(1, 2, 3), số lượng; các phương thức (public): nhập, xuất, và các phương thức khác
(nếu cần).
Xây dựng lớp DIENTU (điện tử) dẫn xuất từ lớp QLH bổ sung thêm thuộc tính tgbh (thời gian
bảo hành, theo tháng).
Viết hàm main() để:
 Nhập thông tin cho n mặt hàng điện tử.
 Thống kê tổng số hàng của từng loại hàng mà có thời gian bảo hành từ 12 tháng
trở lên.
 Tìm một mặt hàng có tên cho trước.

*/
#include <bits/stdc++.h>
using namespace std;

class QLH {
private:
    string maHang;
    string tenHang;
    string xuatXu;
    int loaiHang; 
    int soLuong;

public:
    // Constructor mặc định
    QLH() : maHang(""), tenHang(""), xuatXu(""), loaiHang(1), soLuong(0) {}

    // Phương thức nhập thông tin hàng
    virtual void nhap() {
        cout << "Nhập mã hàng: ";
        cin >> maHang;
        cout << "Nhập tên hàng: ";
        cin.ignore();
        getline(cin, tenHang);
        cout << "Nhập xuất xứ: ";
        getline(cin, xuatXu);
        cout << "Nhập loại hàng (1, 2, 3): ";
        cin >> loaiHang;
        cout << "Nhập số lượng: ";
        cin >> soLuong;
    }

    // Phương thức xuất thông tin hàng
    virtual void xuat(){
        cout << "Mã hàng: " << maHang << "\n";
        cout << "Tên hàng: " << tenHang << "\n";
        cout << "Xuất xứ: " << xuatXu << "\n";
        cout << "Loại hàng: " << loaiHang << "\n";
        cout << "Số lượng: " << soLuong << "\n";
    }

    // Getter cho các thuộc tính
    string getTenHang() { return tenHang; }
    int getLoaiHang()  { return loaiHang; }
    int getSoLuong() { return soLuong; }
};

class DIENTU : public QLH {
private:
    int tgbh;  // Thời gian bảo hành (theo tháng)

public:
    // Constructor mặc định
    DIENTU() : QLH(), tgbh(0) {}

    // Phương thức nhập bổ sung thời gian bảo hành
    void nhap() override {
        QLH::nhap();
        cout << "Nhập thời gian bảo hành (tháng): ";
        cin >> tgbh;
    }

    // Phương thức xuất bổ sung thời gian bảo hành
    void xuat() override {
        QLH::xuat();
        cout << "Thời gian bảo hành: " << tgbh << " tháng\n";
    }

    // Getter cho thời gian bảo hành
    int getThoiGianBaoHanh()  { return tgbh; }
};

// Hàm main để thực hiện yêu cầu
int main() {
    int n;
    cout << "Nhập số lượng mặt hàng điện tử: ";
    cin >> n;

    DIENTU dt[n+1];

    for (int i = 1; i <= n; ++i) {
        cout << "\nNhập thông tin cho mặt hàng thứ " << i << ":\n";
        dt[i].nhap();
    }
    int tongLoai1 = 0, tongLoai2 = 0, tongLoai3 = 0;
    for(int i = 1; i <= n; i++){
        if(dt[i].getThoiGianBaoHanh() >= 12){
            switch (dt[i].getLoaiHang())
            {
            case 1:
                tongLoai1 += dt[i].getSoLuong();
                break;
            case 2:
                tongLoai2 += dt[i].getSoLuong();
                break;
            case 3:
                tongLoai2 += dt[i].getSoLuong();
                break;
            
            default:
                break;
            }
        }
    }

    cout << "\nTổng số hàng loại 1 có thời gian bảo hành từ 12 tháng trở lên: " << tongLoai1 << "\n";
    cout << "Tổng số hàng loại 2 có thời gian bảo hành từ 12 tháng trở lên: " << tongLoai2 << "\n";
    cout << "Tổng số hàng loại 3 có thời gian bảo hành từ 12 tháng trở lên: " << tongLoai3 << "\n";

    // Tìm mặt hàng theo tên
    string tenTimKiem;
    cout << "\nNhập tên mặt hàng cần tìm: ";
    cin.ignore();
    getline(cin, tenTimKiem);

    bool found = false;
    for(int i = 1; i <= n; i++){
        if(dt[i].getTenHang() == tenTimKiem){
            cout << "\nThông tin mặt hàng tìm thấy:\n";
            dt[i].xuat();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Không tìm thấy mặt hàng với tên \"" << tenTimKiem << "\".\n";
    }
        
}