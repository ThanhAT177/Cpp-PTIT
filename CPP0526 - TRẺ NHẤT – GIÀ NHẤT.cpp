#include <iostream>
#include <algorithm>

struct People {
	std::string name, birth;
	int day, month, year;
};

void Convert(People &x) {
	x.day = stoi(x.birth.substr(0,2));
	x.month = stoi(x.birth.substr(3,4));
	x.year = stoi(x.birth.substr(6));
}

bool Compare(People a, People b) {
	if (a.year > b.year) {
		return true;
	}
	if (a.year == b.year && a.month > b.month) {
		return true;
	}
	if (a.year == b.year && a.month == b.month && a.day > b.day) {
		return true;
	}
	return false;
}

main() {
	int n;
	std::cin >> n;
	People a[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i].name >> a[i].birth;
		Convert(a[i]);
	}
	std::sort(a, a + n, Compare);
	std::cout << a[0].name << '\n' << a[n - 1].name << '\n';
}
