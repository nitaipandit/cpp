#include <iostream>

bool found(int matrix[][3], int row, int col, int key) {
  int i, j;
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      if (matrix[i][j] == key) {
        return true;
      }
    }
  }
  return false;
}
int main() {
  int i, j, row, col;
  row = 3;
  col = 3;
  int matrix[3][3];
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      std::cout << "enter the element[" << i << "][" << j << "]:";
      std::cin >> matrix[i][j];
    }
  }
  int tar;
  std::cout << "enter the target element:";
  std::cin >> tar;
  if (found(matrix, row, col, tar)) {
    std::cout << "Found" << std::endl;
  } else {
    std::cout << "Not Found." << std::endl;
  }
}
