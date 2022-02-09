/*
This time no story, no theory. The examples below show you how to write function accum:
Examples:

accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"

The parameter of accum is a string which includes only letters from a..z and A..Z.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *accum(const char *source)
{
  int len = strlen(source);
  char *dash = "-";
  char tmp[2];
  char *message = (char*)malloc(sizeof(char) * len * len);
  
  //loop for new letter
  for(int i = 0; i < len; i++) {
    if(isalpha(source[i]) == 0) {
      break;
    }
    if(i == 0) {      
      *message = toupper((unsigned char)source[i]);
      message = strcat(message, dash);
      continue;
    }
    
    //loop for uppercase and lowercase
    for(int j = 0; j <= i; j++) {      
      if(j == 0) {
        *tmp = toupper((unsigned char)source[i]);
        message = strcat(message, tmp);
      }
      if(j > 0) {
        *tmp = tolower((unsigned char)source[i]);
        message = strcat(message, tmp); 
        if(j == i && i == len - 1) {
          break;
        }
        if(j == i) {
          message = strcat(message, dash);
        }
      }
    }
  }

  return message;
}
