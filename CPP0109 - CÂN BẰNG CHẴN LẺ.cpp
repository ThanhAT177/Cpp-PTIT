#include<iostream>
#include<cmath>

int can_bang(int N) {
	int ss = 0;
	while(N) {
		if((N % 10) & 1)
			++ss;
		else
			--ss;
		N /= 10;
	}
	if(ss)
		return 0;
	return 1;
}

main() {
	int N, count = 0;
	std::cin >> N;
	for(int i = pow(10, N - 1); i < pow(10, N); ++i) {
		if(can_bang(i)) {
			std::cout << i << " ";
			++count;
			if(count == 10) {
				count = 0;
				std::cout << "\n";
			}
		}
	}
}
