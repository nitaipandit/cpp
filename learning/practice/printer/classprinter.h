#ifndef __CLASSPRINTER__H__
#define _CLASSPRINTER__H__
#include<string>
#include<vector>
enum papersize{
  A1,
  A2,
  A3,
  A4,
};
class classprinter{
public:
 classprinter(const std::string& printername){
    m_printername=printername;
  }

  bool isSaportcolourprinting(){
    return false;
  }

  virtual std::vector<papersize> getpapersize()=0;
  virtual void print(const std::string& data)=0;

  virtual void startprinter()=0;
  virtual void stopprinter()=0;
  
  protected:
  std::string m_printername;  
};
#endif

