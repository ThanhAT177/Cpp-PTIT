#include<iostream>

main() {
	int n, m, p;
	std::cin >> n >> m >> p;
	
	int **A = new int *[n];
	for(int i = 0; i < n; ++i)
		A[i] = new int [m];
	int **B = new int *[m];
	for(int i = 0; i < m; ++i)
		B[i] = new int [p];
	int **C = new int *[n];
	for(int i = 0; i < n; ++i)
		C[i] = new int [p];
	
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j)
			std::cin >> A[i][j];
	for(int i = 0; i < m; ++i)
		for(int j = 0; j < p; ++j)
			std::cin >> B[i][j];
	
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < p; ++j) {
			C[i][j] = 0;
			for(int k = 0; k < m; ++k)
				C[i][j] += A[i][k] * B[k][j];
		}
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < p; ++j)
			std::cout << C[i][j] << " ";
		std::cout << "\n";
	}
}
