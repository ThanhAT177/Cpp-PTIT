#include<iostream>
#include<vector>
#include<algorithm>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		int n, k;
		std::cin >> n >> k;
		std::vector<int> A(n);
		for(int i = 0; i < n; ++i)
			std::cin >> A[i];
		std::sort(A.begin(), A.end());
		int count = 0;
		for(int i = 0; i < n; ++i) {
			for(int j = i + 1; j < n; ++j) {
				if(A[i] + A[j] > k)	break;
				else if(A[i] + A[j] == k)	++count;
			}
		}
		std::cout << count << "\n";
		A.clear();
	}
}
