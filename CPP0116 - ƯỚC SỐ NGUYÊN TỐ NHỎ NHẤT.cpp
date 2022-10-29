#include<iostream>
#include<vector>

int lcd(int N) {
	for(int i = 3; i <= N; i += 2)
		if(N % i == 0)
			return i;
}

main() {
	int T;
	std::cin >> T;
	std::vector<int> A;
	A.push_back(1);
	while(T--) {
		int N;
		std::cin >> N;
		if(N > A.size()) {
			for(int i = A.size() + 1; i <= N; ++i) {
				if(i & 1)
					A.push_back(lcd(i));
				else
					A.push_back(2);
			}
		}
		for(int i = 0; i < N; ++i)
			std::cout << A[i] << " ";
		std::cout << "\n";
	}
	A.clear();
}
