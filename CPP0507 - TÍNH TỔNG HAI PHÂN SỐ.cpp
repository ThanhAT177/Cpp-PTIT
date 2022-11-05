#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo {
	long long tu, mau;
};

void nhap(PhanSo &x) {
	cin >> x.tu >> x.mau;
	int tmp =__gcd(x.tu, x.mau);
	x.tu /= tmp;
	x.mau /= tmp;
}

PhanSo tong(PhanSo x, PhanSo y) {
	x.tu = x.tu*y.mau + x.mau*y.tu;
	x.mau *= y.mau;
	int tmp =__gcd(x.tu, x.mau);
	x.tu /= tmp;
	x.mau /= tmp;
	return x;
}

void in(PhanSo x) {
	cout << x.tu << '/' << x.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p);
	nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
