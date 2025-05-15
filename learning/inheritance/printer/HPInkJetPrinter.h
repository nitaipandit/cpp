#ifndef __HP_INKJET_PRINTER_H__
#define __HP_INKJET_PRINTER_H__

#include "PrinterInterface.h"
#include <unistd.h>
#include <vector>
#include <iostream>
#include <thread>
#include <queue>

class HPInkJetPrinter : public PrinterInterface {
public:
  HPInkJetPrinter(const std::string& printerName) : PrinterInterface("[HPInkJetPrinter] " + printerName){
    m_IsExiting = false;
  }
  ~HPInkJetPrinter() {
    stopPrinter();
  }
  std::vector<SupportedPaperSize> getSupportedPaperSize() override {
    std::vector<SupportedPaperSize> supportedPaperSize = { A1,
      A2,
      A3,
      A4
    };
    return supportedPaperSize;
  }

  void print(const std::string& data) override {
    m_PrintJobQueue.push(data);
  }

  void doPrint() 
  {
    do
    {
      while (m_PrintJobQueue.empty() && m_IsExiting==false){
        std::cout<< m_PrinterName << ":" << "Waiting for print job" << std::endl;
        sleep(1);
      } 
      if (m_IsExiting == false || !m_PrintJobQueue.empty())
      {
        const std::string& data = m_PrintJobQueue.front();
        std::cout << m_PrinterName << ":"<< "Printing... : " << data << std::endl;
        m_PrintJobQueue.pop();
      }
    }while(m_IsExiting == false || !m_PrintJobQueue.empty());
  }

  void startPrinter() override
  {
    m_IsExiting = false;
    m_printThread = std::thread( &HPInkJetPrinter::doPrint, this);
  }
  void stopPrinter() override
  {
    m_IsExiting = true;
    m_printThread.join();
  } 
private: 
  std::queue<std::string> m_PrintJobQueue; 
  bool m_IsExiting;
  std::thread m_printThread;
};
#endif

