int getZValue() { return 0; }
int add(int a, int b) {
  int x = a;
  int y = b;
  int z = getZValue();
  return x + y + z;
}
int main() {
  int sum = 0;
  sum = add(2, 5);
  return sum;
}
