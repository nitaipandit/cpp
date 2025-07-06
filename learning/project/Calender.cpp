#include <iomanip>
#include <iostream>

int leepyear(int year) {
  return (year % 4 == 0 && year % 400 != 0) || (year % 400 == 0);
}
int getdays(int year, int month) {
  switch (month) {
  case 1: {
    return 31;
  }
  case 2: {
    return leepyear(year) ? 28 : 29;
  }
  case 3: {
    return 31;
  }
  case 4: {
    return 30;
  }
  case 5: {
    return 31;
  }
  case 6: {
    return 30;
  }
  case 7: {
    return 31;
  }
  case 8: {
    return 31;
  }
  case 9: {
    return 30;
  }
  case 10: {
    return 31;
  }
  case 11: {
    return 30;
  }
  case 12: {
    return 31;
  }
  }
  return 0;
}
int getstartday(int year, int month) {
  if (month < 3) {
    month += 12;
    year--;
  }
  int k = year % 100;
  int j = year / 100;
  int days = (1 + 13 * (month + 1) / 5 + k + (k / 4) + (j / 4) + 5 * j) % 7;
  return (days + 6) % 7;
}
#include <string>

std::string getMonthName(int month) {
  std::string name[] = {"January",   "February", "March",    "April",
                        "May",       "June",     "July",     "August",
                        "September", "October",  "November", "December"};

  if (month >= 1 && month <= 12)
    return name[month - 1];
  else
    return "Invalid Month";
}

void printMonth(int year, int month) {
  int days = getdays(year, month);
  int start = getstartday(year, month);

  std::cout << "\n=====" << getMonthName(month) << "  " << year << "======\n";
  std::cout << "Sun Mon Tue Wed Thu Fri Sat\n";
  int day = 1;
  for (int i = 0; i < start; ++i) {
    std::cout << "    ";
  }

  for (int i = start; day <= days; ++i) {
    std::cout << std::setw(3) << day << " ";
    if (i % 7 == 6)
      std::cout << "\n";
    day++;
  }
  std::cout << "\n";
}

int main() {
  int year, month;
  std::cout << "enter the year:" << std::endl;
  std::cin >> year;
  for (month = 0; month <= 12; month++) {
    printMonth(year, month);
  }
  return 0;
}
