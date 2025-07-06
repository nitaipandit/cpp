#ifndef __LOGIN_H__
#define __LOGIN_H__
#include <fstream>
#include <functional>
#include <iostream>
#include <ostream>
class Login {
private:
  std::string name, email, Password;
  std::string search_name, search_email, search_paw;

public:
  void login();
  void singup();
  void forget_password();
};
#endif // !__LONG_WIDTH__
