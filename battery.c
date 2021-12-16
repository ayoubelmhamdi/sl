#include "util.h"
#include <stdio.h>
#include <stdlib.h> // atoi
#include <string.h>

#define BATTRY_STATUS "/sys/class/power_supply/axp288_fuel_gauge/status"
#define BATTRY_CAPACITY "/sys/class/power_supply/axp288_fuel_gauge/capacity"

int battery_status() {
  char *bs = read_file(BATTRY_STATUS);
  bs[strcspn(bs, "\n")] = 0;
  if (strcmp(bs, "Charging") == 0)
    return 1;
  else if (strcmp(bs, "Discharging") == 0)
    return 2;

  /* more else if clauses */
  else if (strcmp(bs, "Full") == 0)
    return 0;

  return -1;
}
int battery_capacity() {
  char *bs = read_file(BATTRY_CAPACITY);
  bs[strcspn(bs, "\n")] = 0;

  return atoi(bs);
}
