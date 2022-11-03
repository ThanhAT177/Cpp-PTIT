#include <iostream>
#include <iomanip>
using namespace std;

struct SinhVien {
	string msv = "N20DCCN001";
	string name;
	string birth;
	string room;
	float GPA;
};

void nhapThongTinSV(SinhVien &x) {
	getline(cin, x.name);
	getchar();
	getline(cin, x.room);
	getchar();
	getline(cin, x.birth);
	getchar();
	cin >> x.GPA;
}

void PrintDate(SinhVien x) {
	if (x.birth[1] == '/') {
		x.birth.insert(0, "0");
	}
	if (x.birth[4] == '/') {
		x.birth.insert(3, "0");
	}
	cout << x.birth << '\t';
}

void inThongTinSV(SinhVien x) {
	cout << x.msv << '\t' << x.name << '\t' << x.room << '\t';
	PrintDate(x);
	cout << setprecision(2) << fixed << x.GPA;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
