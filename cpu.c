#include <stdlib.h>

#include "util.h"
int cpu_freq() {
  int sum;
  char *string0 =
      read_file("/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq");
  char *string1 =
      read_file("/sys/devices/system/cpu/cpu1/cpufreq/scaling_cur_freq");
  char *string2 =
      read_file("/sys/devices/system/cpu/cpu2/cpufreq/scaling_cur_freq");
  char *string3 =
      read_file("/sys/devices/system/cpu/cpu3/cpufreq/scaling_cur_freq");

  if (string1 && string1 && string2 && string3) {
    sum = (atoi(string0) + atoi(string1) + atoi(string2) + atoi(string3)) /
          (4 * 1000);
    free(string0);
    free(string1);
    free(string2);
    free(string3);
    return sum;
  }
  return 0;
}

int cpu_perc() {
  return (cpu_freq() * 100) / 1832;
}
