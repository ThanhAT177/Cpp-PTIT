#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

class PhanSo {
	private:
		ll tu, mau;
	public:
		PhanSo(ll t = 0, ll m = 1) {
			tu = t, mau = m;
		}
		void rutgon() {
			ll tmp = __gcd(tu, mau);
			tu /= tmp;
			mau /= tmp;
		}
		friend void operator >> (istream &mycin, PhanSo &p) {
			mycin >> p.tu >> p.mau;
		}
		friend void operator << (ostream &mycout, PhanSo &p) {
			mycout << p.tu << "/" << p.mau;
		}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
