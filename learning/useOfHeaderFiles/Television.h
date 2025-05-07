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
