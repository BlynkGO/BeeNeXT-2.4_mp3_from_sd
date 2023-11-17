#ifndef __PROJECT_H__
#define __PROJECT_H__

#include <BlynkGOv3.h>

enum { MUSIC_STANDBY, MUSIC_PLAY, MUSIC_PAUSE };
extern uint8_t music_state;

namespace SD_CARD {
  void listDir(const char * dirname, uint8_t levels=0);
}

namespace MP3 {
  void init();
  void play(String filename);
  void stop();
  void volume(uint8_t vol_percentage);
}

#endif
