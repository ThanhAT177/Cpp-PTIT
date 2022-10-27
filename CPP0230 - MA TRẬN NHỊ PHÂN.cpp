#include<iostream>

main() {
	int N;
	std::cin >> N;
	int **A = new int *[N];
	for(int i = 0; i < N; i++)
		A[i] = new int[3];
	int dem_dong = 0;
	for(int i = 0; i < N; i++) {
		int dem_so = 0;
		for(int j = 0; j < 3; j++) {
			std::cin >> A[i][j];
			if(A[i][j] == 1)  dem_so++;
			else  dem_so--;
		}
		if(dem_so > 0)  dem_dong++;
	}
	std::cout << dem_dong << "\n";
	return 0;
}
