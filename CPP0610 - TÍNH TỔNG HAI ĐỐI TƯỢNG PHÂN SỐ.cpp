#include <iostream>
#include <algorithm>
using namespace std;

class PhanSo {
	private:
		long long tu, mau;
	public:
		PhanSo(long long t = 0, long long m = 1) {
			tu = t;
			mau = m;
		}
		long long XuatTu() { return tu; };
		long long XuatMau() { return mau; };
		friend istream &operator>> (istream &mycin, PhanSo &x);
		friend ostream &operator<< (ostream &mycout, PhanSo &x);
		PhanSo operator+ (PhanSo b);
};

istream &operator>> (istream &mycin, PhanSo &x) {
	cin >> x.tu >> x.mau;
	return mycin;
}

ostream &operator<< (ostream &mycout, PhanSo x) {
	cout << x.XuatTu() << '/' << x.XuatMau();
	return mycout;
}

PhanSo PhanSo::operator+ (PhanSo y) {
	this->tu = this->tu*y.mau + this->mau*y.tu;
	this->mau *= y.mau;
	long long tmp = __gcd(this->tu, this->mau);
	this->tu /= tmp;
	this->mau /= tmp;
	return *this;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
