#include <iostream>
#include <vector>
#include <algorithm>

void Answer() {
	std::string s;
	std::cin >> s;
	std::vector<int> v;
	int tmp = 0;
	for (int i = 0; s[i]; ++i) {
		if (s[i] >= '0' && s[i] <= '9') {
			tmp = tmp*10 + s[i] - '0';
		} else {
			v.emplace_back(tmp);
			tmp = 0;
		}
	}
	std::sort(v.begin(), v.end());
	std::cout << v.back() << '\n';
}

main() {
	int t;
	std::cin >> t;
	while(t--) {
		Answer();
	}
}
