#include <stdio.h>
#include <stdlib.h> // atoi
#include <unistd.h>

#include "util.h"
#include "slstatus.h"
#include "modules.h"
#include "str.h"

// /sys/devices/system/cpu/cpu0/cpufreq/
int main (int argc, char *argv[])
{

  string s2 = string_create("ayoub");
  string s1 = string_create("ayoub");

  /* printf("string : %s\n",s1+s2); */
   /* printf("test cpu_freq: %d %% \n",cpu_perc()); */
  /* printf("test battery_status: %d \n",battery_status()); */
  /* printf("test battery_status: %d \n",battery_capacity()); */
  /* printf("test cpu_freq: %d\n",cpu_freq()); */
  return 0;
}
