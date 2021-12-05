#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util.h"

#define CHAR_SIZE 1024

char *read_file(char *filename) {
  char *myvar = (char *)malloc(CHAR_SIZE);
  FILE *f = fopen(filename, "r");

  fgets(myvar, CHAR_SIZE, f);
  fclose(f);

  return myvar;
}
