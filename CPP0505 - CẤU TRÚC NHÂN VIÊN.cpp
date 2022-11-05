#include <iostream>
using namespace std;

struct NhanVien {
	std::string code = "00001", name, sex, birth, address, tax_num, date;
};

void nhap(NhanVien &a) {
	getline(cin, a.name);
	getline(cin, a.sex);
	getline(cin, a.birth);
	getline(cin, a.address);
	getline(cin, a.tax_num);
	getline(cin, a.date);
}

void in(NhanVien a) {
	cout << a.code << ' ' << a.name << ' ' << a.sex << ' ' << a.birth
	     << ' ' << a.address << ' ' << a.tax_num << ' ' << a.date;
}

int main() {
	struct NhanVien a;
	nhap(a);
	in(a);
	return 0;
}
