#include <iostream>
int main() {
  int i, j, row, col;
  std::cout << "enter the length of Row:";
  std::cin >> row;
  std::cout << "enter the length of col:";
  std::cin >> col;
  int matrix[row][col];
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      std::cout << "enter the element:";
      std::cin >> matrix[i][j];
    }
  }
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      std::cout << matrix[i][j];
    }
    std::cout << std::endl;
  }
}
