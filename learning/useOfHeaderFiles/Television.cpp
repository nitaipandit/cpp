#include "Television.h"

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
