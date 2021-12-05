#include <stdio.h>
#include <stdlib.h> // atoi

#include "util.h"
#include "slstatus.h"
#include "modules.h"

// /sys/devices/system/cpu/cpu0/cpufreq/
int main (int argc, char *argv[])
{

  printf("test cpu_freq: %d %% \n",cpu_perc());
  printf("test battery_status: %d \n",battery_status());
  /* printf("test cpu_freq: %d\n",cpu_freq()); */
  return 0;
}
