#include<iostream>
#include<set>

main() {
	int T;
	std::cin >> T;
	std::set<std::string> A;
	getchar();
	while(T--) {
		std::string tmp;
		getline(std::cin, tmp);
		A.insert(tmp);
	}
	std::cout << A.size();
}
