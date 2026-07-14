#include <climits>
#include <iostream>
void findminelement() {
  int i, n;
  std::cout << "enter the length of element:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  int x = INT_MAX;
  for (i = 0; i < n; i++) {
    if (arr[i] <= x) {
      x = arr[i];
    }
  }
  std::cout << "Minimum Element is " << x << std::endl;
}
void findKthelement() {
  int i, n;
  std::cout << "enter the lengthof element:";
  std::cin >> n;
  int arr[n];
  for (i = 0; i < n; i++) {
    std::cout << "enter the element:";
    std::cin >> arr[i];
  }
  int y;
  std::cout << "enter kth element:";
  std::cin >> y;
  while (y != 0) {
    int x = INT_MAX;
    for (i = 0; i < n; i++) {
      if (x > arr[i]) {
        x = arr[i];
      }
    }
    std::cout << x;
    for (i = 0; i < n; i++) {
      if (arr[i] == x) {
        arr[i] = INT_MAX;
      }
    }

    y--;
    if (y == 0) {
      std::cout << "kth Element " << x << std::endl;
    }
  }
}

int main() {

  while (1) {
    std::cout << "\n" << "1.Find Minimum Element." << std::endl;
    std::cout << "2.Find Kth Smallest Element." << std::endl;

    int choise;
    std::cout << "enter your choise:";
    std::cin >> choise;
    switch (choise) {
    case 1: {
      findminelement();
      break;
    }
    case 2: {
      findKthelement();
      break;
    }
    }
  }
}
