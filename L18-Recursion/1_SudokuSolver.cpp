#include <iostream>
#include <cmath>
using namespace std;

bool isSafe(int mat[][9], int i, int j, int n, int number) {
	for (int k = 0; k < n; ++k)
	{	// the number should not be present in the row or column
		if (mat[k][j] == number || mat[i][k] == number) {
			return false;
		}
	}

	n = sqrt(n);
	int si = (i / n) * n;
	int sj = (j / n) * n;

	for (int i = si; i < si + n; ++i)
	{
		for (int j = sj; j < sj + n; ++j)
		{
			if (mat[i][j] == number) return false;
		}
	}

	// its safe to put number thus return true
	return true;
}

bool solveSudoku(int mat[][9], int i, int j, int n) {
	// base case
	if (i == n) {
		// Print the sudoku
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}

	// If we overshoot the value of j
	if (j == n) {
		return solveSudoku(mat, i + 1, 0, n);
	}

	// if a cell is already filled, then recursion krega chote ko solve and whi
	// final answer bhi hoga
	if (mat[i][j] != 0) {
		return solveSudoku(mat, i, j + 1, n);
	}

	// recursive case : Ek empty cell hum fill krenge, baaki ke recursion krega
	for (int number = 1; number <= n; ++number)
	{
		if (isSafe(mat, i, j, n, number)) {
			mat[i][j] = number; // number rakhna safe h toh rakhdo
			bool kyaBaakiEmptyCellsFillHoGaye = solveSudoku(mat, i, j + 1, n);
			if (kyaBaakiEmptyCellsFillHoGaye) {
				return true;
			}
			mat[i][j] = 0; // backtracking
		}
	}
	// loop mei humne 1-n tak har number rakhne ki koshish kri, koi bhi no nhi rah paye
	// that means its not possible to solve the current cell
	return false;
}

int main() {
	int mat[9][9] = {
		{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	solveSudoku(mat, 0, 0, 9);


	return 0;
}
















