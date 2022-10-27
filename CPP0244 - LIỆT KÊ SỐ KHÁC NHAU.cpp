#include<iostream>
#include<algorithm>

main() {
	int n;
	std::cin >> n;
	int *A = new int[n];
	for(int i = 0; i < n; ++i) {
		std::cin >> A[i];
	}
	std::sort(A, A + n);
	for(int i = 0; i < n; ++i) {
		if(A[i] != A[i - 1])
			std::cout << A[i] << " ";
	}
	return 0;
}
