#include"epsonInkjetprinter.h"
#include<unistd.h>
int main()
{
  epsonInkjetprinter printer("printer1");
  printer.startprinter();
  sleep(3);
  printer.print("hello wworld");
  sleep(5);
  printer.print("print after 5ses.");
}
