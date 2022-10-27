#include<iostream>
using namespace std;
typedef unsigned long long ull;

struct PhanSo {
	ull Ts, Ms;
};

void nhap(PhanSo &P) {
	cin >> P.Ts >> P.Ms;
}

ull UCLN(ull A, ull B) {
	if(B == 0)
		return A;
	return UCLN(B, A % B);
}

void rutgon(PhanSo &P) {
	ull tmp = P.Ts;
	P.Ts /= UCLN(P.Ts, P.Ms);
	P.Ms /= UCLN(tmp, P.Ms);
}

void in(PhanSo p) {
	cout << p.Ts << "/" << p.Ms;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
