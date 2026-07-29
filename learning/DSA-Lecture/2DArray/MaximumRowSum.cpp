#include <climits>
#include <iostream>
int main() {
  int i, j, row, col;
  row = 3;
  col = 3;
  int matrix[3][3];
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      std::cout << "enter the element[" << i << "][" << j << "]: ";
      std::cin >> matrix[i][j];
    }
  }
  int maxSum = INT_MIN;
  for (i = 0; i < row; i++) {
    int sum = 0;
    for (j = 0; j < col; j++) {
      sum += matrix[i][j];
    }
    maxSum = std::max(maxSum, sum);
  }
  std::cout << maxSum << std::endl;
}
