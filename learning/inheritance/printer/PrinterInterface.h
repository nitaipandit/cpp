#ifndef __PRINTER_INTERFACE_H__
#define __PRINTER_INTERFACE_H__
#include <string>
#include <vector>

enum SupportedPaperSize {
  A1,
  A2,
  A3,
  A4,
  Photo_4x6,
  Photo_5x7,
  Photo_10x12
};

class PrinterInterface {

public:
  PrinterInterface(const std::string& printerName) {
    m_PrinterName = printerName;
  }
  /*
   * Does printer support color printing
   * */
  virtual bool isSupportColorPrinting() {
    return false;
  }
  /*
   * Return list of supported paper size
  */
  virtual std::vector<SupportedPaperSize> getSupportedPaperSize() = 0;
  
  /**
   * Add printing job to que.
  */
  virtual void print(const std::string& data) = 0;

  /*
   * Start thread to perform print job
   * */
  virtual void startPrinter() = 0;
  virtual void stopPrinter() = 0;
protected:
  std::string m_PrinterName;
};
#endif
