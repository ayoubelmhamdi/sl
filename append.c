#include <string.h>
#include <malloc.h>
#include <stdio.h>
char * append(char * str1,char * str2){
  char * new_str ;
  if((new_str = malloc(strlen(str1)+strlen(str2)+1)) != NULL){
      new_str[0] = '\0';   // ensures the memory is an empty string
      strcat(new_str,str1);
      strcat(new_str,str2);
  } else {
      fprintf(stderr,"malloc failed!\n");
      // exit?
  }
  return new_str;
}
