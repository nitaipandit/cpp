#ifndef __HPCOLORPRINTER__H__
#define __HPCOLORPRINTER__H__
#include"PrinterInterface.h"
class HPColorPrinter : public PrinterInterface{
public:
 HPColorPrinter(const std:: string& printername): PrinterInterface("[HPColorPrinter]" +printername){
  }
  ~HPColorPrinter(){
  }
  
  bool isSupportColorPrinting() override {
    return true; 
  }

  std::vector<SupportedPaperSize> getSupportedPaperSize() override{
    std::vector<SupportedPaperSize> supportedPaperSize={ A1,
      A2,
      A3,
      A4
    };
    return supportedPaperSize;
  }
  void print(const std:: string& data) override{
    std::cout << m_PrinterName << " Printing data: " << data << std::endl;
  }

  void startPrinter() override {

  }
  void stopPrinter() override {

  }
};

#endif

