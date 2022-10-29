#include<iostream>
#include<vector>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int n, count = 0;
		std::cin >> n;
		std::vector<long long> A(n);
		for(int i = 0; i < n; ++i)
			std::cin >> A[i];
		for(long long x : A) {
			if(x)
				std::cout << x << " ";
			else
				++count;
		}
		while(count--)
			std::cout << "0 ";
		std::cout << "\n";
		A.clear();
	}
}
