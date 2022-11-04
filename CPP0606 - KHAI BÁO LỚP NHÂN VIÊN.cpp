#include <iostream>
using namespace std;

class NhanVien {
	private:
		std::string code_ = "00001", name_, sex_, birth_, address_, tax_num_, date_;
	public:
		friend void operator >> (istream &mycin, NhanVien &a) {
			getline(mycin, a.name_);
			getline(mycin, a.sex_);
			getline(mycin, a.birth_);
			getline(mycin, a.address_);
			getline(mycin, a.tax_num_);
			getline(mycin, a.date_);
		}
		friend void operator << (ostream &mycout, NhanVien &a) {
			mycout << a.code_ << ' ' << a.name_ << ' ' << a.sex_ << ' ' << a.birth_
			       << ' ' << a.address_ << ' ' << a.tax_num_ << ' ' << a.date_;
		}
};

int main() {
	NhanVien a;
	cin >> a;
	cout << a;
	return 0;
}
