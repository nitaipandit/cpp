#include "HPInkJetPrinter.h"
#include <unistd.h>
#include "HPColorPrinter.h"

int main()
{
  std::queue<PrinterInterface*> printerqueue;
  HPInkJetPrinter printer( "Printer1");
  HPInkJetPrinter printer2("printer2");
  HPColorPrinter hpColorPrinter("ColorPrinter");
  printerqueue.push(&printer);
  printerqueue.push(&printer2);
  printerqueue.push(&hpColorPrinter);
  hpColorPrinter.print("Printing color data");
  printer.startPrinter();
  printer2.startPrinter();
  sleep(4);
  printer.print("(printer.1)-Hello World");
  printer2.print("(printer.2)-hello world");
  // sleep(5);
  // printer.print("Print data after sleeping for 5 seconds");
  // printer2.print("print data after sleeping for 5 second");

  std::string printJob[] = {
    "Printing data 1",
    "Printing data 2",
    "Printing data 3",
    "Printing data 4",
    "Printing data 5",
    "Printing data 6",
    "Printing data 7",
    "Printing data 8",
    "Printing data 9",
    "Printing data 10",
  };
  
  // for(int i=0 ; i<10; i++) {
  //  const std::string& data = printJob[i];
  // }
  for (const std::string& data  : printJob) {
    PrinterInterface * printerPtr = printerqueue.front();
    printerPtr->print(data);
    printerqueue.pop();
    printerqueue.push(printerPtr);
  }
}
