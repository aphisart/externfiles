#include <iostream>

constexpr int n = 3;
constexpr int m = 3;

extern "C" int rarr(int* matr, int r, int c);

int main() {
	int matr[n][m], res;
	std::cout<<"Enter matrix: "<<'\n';
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> matr[i][j];
	res = rarr(*matr, n, m);
	std::cout << res << '\n';
	//////


	////
	//
	//
}