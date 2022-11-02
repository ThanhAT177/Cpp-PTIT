#include <iostream>
#include <iomanip>
using namespace std;

struct SinhVien {
	string msv = "B20DCCN001";
	string name;
	string birth;
	string room;
	float GPA;
};

void nhap(SinhVien &x) {
	getline(cin, x.name);
	getline(cin, x.room);
	getline(cin, x.birth);
	cin >> x.GPA;
}

void PrintDate(SinhVien x) {
	if (x.birth[1] == '/') {
		x.birth.insert(0, "0");
	}
	if (x.birth[4] == '/') {
		x.birth.insert(3, "0");
	}
	cout << x.birth << " ";
}

void in(SinhVien x) {
	cout << x.msv << " " << x.name << " " << x.room << " ";
	PrintDate(x);
	cout << setprecision(2) << fixed << x.GPA;
}


int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
