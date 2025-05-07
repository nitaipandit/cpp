
#include <iostream>
class Television {
  // Access Specifier
public:
  // Constructor
  Television(int channelNumber) {
    m_OnOffStatus = false;
    m_CurrentChannel = channelNumber;
    m_BrightnessLevel = 50;
    m_ContrastLevel = 50;
  }

  // Member Functions
  bool toggleOnOff(); // function declaration
  void setChannel(int channelNumber);
  void setBrightnessLevel(int brightnessLevel);
  void setContrastLevel(int contrastLevel);
  bool getOnOffStatus() { return m_OnOffStatus; }
  int getCurrentChannel() { return m_CurrentChannel; }

  int getBrightnessLevel() { return m_BrightnessLevel; }

  int getContrastLevel() { return m_ContrastLevel; }

private:
  bool m_OnOffStatus;
  int m_CurrentChannel;
  int m_BrightnessLevel;
  int m_ContrastLevel;
};

bool Television::toggleOnOff() {
  m_OnOffStatus = !m_OnOffStatus;
  return m_OnOffStatus;
}

void Television::setChannel(int channelNumber) {
  m_CurrentChannel = channelNumber;
}

void Television::setBrightnessLevel(int brightnessLevel) {
  m_BrightnessLevel = brightnessLevel;
}

void Television::setContrastLevel(int contrastLevel) {
  m_ContrastLevel = contrastLevel;
}

int main() {
  Television television(1);   // creating instance/object of Television
  Television television2(10); // creating instance/object of Television
  std::cout << "OnOfStatus:" << television.getOnOffStatus() << std::endl;
  std::cout << "CurrentChannel:" << television.getCurrentChannel() << std::endl;

  std::cout << "[TV2] OnOfStatus:" << television2.getOnOffStatus() << std::endl;
  std::cout << "[TV2] CurrentChannel:" << television2.getCurrentChannel()
            << std::endl;
  television.toggleOnOff();
  television.setBrightnessLevel(70);
  std::cout << "OnOfStatus:" << television.getOnOffStatus() << std::endl;
  std::cout << "brightnessLevel:" << television.getBrightnessLevel()
            << std::endl;
  television2.setBrightnessLevel(60);
  std::cout << "[TV2]OnOfStatus:" << television2.getOnOffStatus() << std::endl;
  std::cout << "[TV2]brightnessLevel:" << television2.getBrightnessLevel()
            << std::endl;
}
