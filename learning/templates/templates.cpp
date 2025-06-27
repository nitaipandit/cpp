
#include <iostream>

#if 0
int sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }
#else
template <typename T> T sum(T a, T b) { return a + b; }

#endif

int main() {
  std::cout << "sum(1,4) :" << sum(1, 4) << std::endl;
  std::cout << "sum(1.5,4.2) :" << sum(1.5, 4.2) << std::endl;
  std::cout << "sum(std::string(Hello), std::string(world)) :"
            << sum(std::string("Hello"), std::string(" World")) << std::endl;
}
