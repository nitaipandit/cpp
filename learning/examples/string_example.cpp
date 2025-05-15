#include <cstdio>
#include <cstdlib>
#include <cstring>
namespace std {
class string {

  string() {
    m_string = nullptr;
    m_bufferSize = 0;
    m_size = 0;
  }

  string(const char *str) {
    if (str != nullptr) {
      size_t len = strlen(str);
      m_size = len;
      m_bufferSize = len * 2;
      m_string = (char *)malloc(m_bufferSize);
      strcpy(m_string, str);
    }
  }

private:
  char *m_string;
  size_t m_bufferSize;
  size_t m_size;
};
} // namespace std
