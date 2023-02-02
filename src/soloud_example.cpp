#include "soloud.h"
#include "soloud_sfxr.h"
#include "soloud_speech.h"
#include "soloud_thread.h"

int main(int argc, char* argv[]) {
  SoLoud::Soloud soloud;
  soloud.init();

  SoLoud::Sfxr coin;
  coin.loadPreset(SoLoud::Sfxr::COIN, 3247);

  SoLoud::Speech speech;
  speech.setText("So loud seems to work. This voice is kind of terrible.");
  soloud.play(speech);

  while (soloud.getActiveVoiceCount() > 0) {
    SoLoud::Thread::sleep(100);
    if (soloud.getActiveVoiceCount() == 1) {
      soloud.play(coin);
    }
  }

  soloud.deinit();
  return 0;
}