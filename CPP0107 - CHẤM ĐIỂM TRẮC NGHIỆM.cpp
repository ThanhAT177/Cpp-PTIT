#include<iostream>
#include<iomanip>
using namespace std;

class bkt {
	private:
		int ma_de;
		char bai_lam[15];
		char d1[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
		char d2[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

		double tinh_diem() {
			double tmp = 10;
			if(ma_de == 101) {
				for(int i = 0; i < 15; i++)
					if(bai_lam[i] != d1[i])
						tmp -= (double) 10/15;
			} else {
				for(int i = 0; i < 15; i++)
					if(bai_lam[i] != d2[i])
						tmp -= (double) 10/15;
			}
			return tmp;
		}
	public:
		void nhap() {
			cin >> ma_de;
			for(int i = 0; i < 15; ++i)
				cin >> bai_lam[i];
		}
		~bkt() {
			cout << setprecision(2) << fixed << tinh_diem() << "\n";
		}
};

main() {
	int T;
	cin >> T;
	while(T--) {
		bkt x;
		x.nhap();
	}
}
