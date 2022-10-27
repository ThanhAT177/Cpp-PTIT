#include<iostream>
#include<cmath>
#include<iomanip>

main() {
	int T;
	std::cin >> T;
	while(T--) {
		double xA, yA, xB, yB;
		std::cin >> xA >> yA >> xB >> yB;
		std::cout << std::setprecision(4) << std::fixed << sqrt((xA - xB)*(xA - xB) + (yA - yB)*(yA - yB)) << "\n";
	}
}
