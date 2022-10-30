#include<iostream>
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
		friend void operator >> (istream &mycin, SinhVien &a) {
			getline(mycin, a.name);
			getline(mycin, a.lop);
			getline(mycin, a.date);
			mycin >> a.GPA;
		}
		friend void operator << (ostream &mycout, SinhVien &a) {
			if(a.date[1] == '/')
				a.date.insert(0, "0");
			if(a.date[4] == '/')
				a.date.insert(3, "0");
			mycout << a.msv << " " << a.name << " "<< a.lop << " " << a.date << " ";
			mycout << setprecision(2) << fixed << a.GPA << endl;
		}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
