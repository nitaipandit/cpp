#ifndef __EPSONINKJETPRINTER__H__
#define __EPSONINKJETPRINTER__H__
#include"classprinter.h"
#include<unistd.h>
#include<vector>
#include<iostream>
#include<thread>
#include<queue>
class epsonInkjetprinter : public classprinter{
  public:
  epsonInkjetprinter(const std::string& printername): classprinter("[epsonInkjetprinter]" + printername){ 
    m_isexiting=false;
  }
  ~epsonInkjetprinter(){
    stopprinter();
  }
  std::vector<papersize> getpapersize()override{
     std::vector<papersize> papersize={
      A2,
      A3,
      A4,
    };
    return papresize;
  }

  void print(const std::string& data) override{
    m_printjobque.push(data);
  }
  
  void doprint
  {
    do
    {
      while(m_printjobque.empty())
      {
        std::cout<<m_printername<<":"<<"waiting for job."<<std::endl;
        sleep(1);
      }
      const std::string& data = m_printjobque.front();
      std::cout<<m_printername<<":"<<"printing..:"<<data<<std::endl;
      m_printjobque.pop();
    }while(m_isexiting==false);
  }
  void startprinter() override{
    m_isexting=false;
    m_printTharade= std::thread(&epsoninkjetprinter::doprint,this);
  }
  void stopprinter() override{
    m_exiting=true;
    m_printThrade.join();
  }
  private:
  std::queue<std::string> m_printjobque;
  bool m_isexiting;
  std::Thread m_printthrade;
};
#endif
