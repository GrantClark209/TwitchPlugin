#pragma once
#pragma comment(lib, "pluginsdk.lib")
#include "bakkesmod/plugin/bakkesmodplugin.h"

using namespace std;
class FuzbotPlugin : public BakkesMod::Plugin::BakkesModPlugin {
 public:
  virtual void onLoad();
  virtual void onUnload();

 private:
  void onCarUpdate();
};