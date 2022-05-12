#ifndef ETRC22_STATE_MANAGER_H_
#define ETRC22_STATE_MANAGER_H_

#include "driving_manager.h"
#include "game_play.h"
#include "driving_type.h"

enum State {
  kTimeAttack = 0,
  kGetBonus,
  kTestRun,
  kStateNum
};

class StateManager {
 public:
  StateManager(DrivingManager* driving_manager, BingoAgent* bingo_agent, LineTracer* lin_tracer);
  void Update();
  void Line();
  //char str[264];
  Hsv curr_hsv;
 private:
  void TimeAttack();
  void GetBonus();
  void TestRun();
  // void Line();
  DrivingManager* driving_manager_;
  BingoAgent* bingo_agent_;
  LineTracer* line_tracer_;
  State state_;
};

#endif  // ETRC22_STATE_MANAGER_H_
