#include <stdio.h>
#include <signal.h>
#include <unistd.h>

#include "signal_handlers.h"

void catch_sigint(int signalNo)
{
  signal(SIGINT,SIG_IGN);

  // TODO: File this!
}

void catch_sigtstp(int signalNo)
{
  signal(SIGTSTP,SIG_IGN);

 // TODO: File this!
}
