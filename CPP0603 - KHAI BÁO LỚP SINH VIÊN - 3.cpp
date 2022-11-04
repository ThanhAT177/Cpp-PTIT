#include <iostream>
#include <iomanip>
using namespace std;

void Convert(string &name, string &date) {
	name[0] = toupper(name[0]);
	for (int i = 1; name[i]; ++i) {
		if (name[i - 1] == ' ') {
			name[i] = toupper(name[i]);
		} else {
			name[i] = tolower(name[i]);
		}
	}
	if (date[1] == '/') {
		date.insert(0, "0");
	}
	if (date[4] == '/') {
		date.insert(3, "0");
	}
}

class SinhVien {
	private:
		string code_ = "B20DCCN001", name_, class_, birth_;
		float gpa_;

	public:
		SinhVien() {
			name_ = class_ = birth_ = '\0';
			gpa_ = 0;
		}
		friend void operator >> (istream &mycin, SinhVien &a) {
			getline(mycin, a.name_);
			getline(mycin, a.class_);
			getline(mycin, a.birth_);
			cin >> a.gpa_;
			Convert(a.name_, a.birth_);
		}
		friend void operator << (ostream &mycout, SinhVien &a) {
			cout << a.code_ << ' ' << a.name_ << ' ' << a.class_ << ' ' << a.birth_
			<< ' ' << setprecision(2) << fixed << a.gpa_;
		}
};

int main() {
	SinhVien a;
	cin >> a;
	cout << a;
	return 0;
}
