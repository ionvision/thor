//
// Created by JinTian on 02/01/2018.
//

/**
 * A simple example of using Thor library
 */

#include <iostream>
#include <zconf.h>
#include "thor/macro.h"
#include "thor/timer.h"
#include "thor/logging.h"
#include "thor/os.h"


using namespace std;
using namespace thor;

int main() {

  PRINT_RED("hello, we are testing some basic function in thor...");

  PRINT_GREEN("1. test a timer.");
  thor::Timer timer(20);
  timer.on();

  LOG(INFO) << " count start..";
  for (int i = 0; i < 3; ++i) {
    sleep(1);
  }
  LOG(INFO) << " cost time: " << timer.lap() << endl;

  PRINT_GREEN("2. test datum.");

  if(thor::os::suffix("hhhaaa.mp4") == "mp4") {
    LOG(INFO) << "this is an video file.";
  }

}