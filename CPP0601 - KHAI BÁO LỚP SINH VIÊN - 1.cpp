#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class SinhVien {
	private:
		string name;
		string lop;
		string date;
		float GPA;
		string msv = "B20DCCN001";
	public:
		void nhap() {
			getline(cin, name);
			getline(cin, lop);
			getline(cin, date);
			cin >> GPA;
		}
		void xuat() {
			if(date[1] == '/')
				date.insert(0, "0");
			if(date[4] == '/')
				date.insert(3, "0");
			cout << msv << " " << name << " "<< lop << " " << date << " ";
			cout << setprecision(2) << fixed << GPA << endl;
		}
};

int main() {
	SinhVien a;
	a.nhap();
	a.xuat();
	return 0;
}
