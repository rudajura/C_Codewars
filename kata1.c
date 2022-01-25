/*
Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. 
The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false
*/


#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool xo (const char* str)
{
  int len = strlen(str);
  int ocount = 0;
  int xcount = 0;
  for(int i = 0; i < len; i++) {
    if(str[i] == 'x' || str[i] == 'X') {
      xcount++;
    }
  }
  for(int i = 0; i < len; i++) {
    if(str[i] == 'o' || str[i] == 'O') {
      ocount++;
    }
  }
  
  if(ocount == xcount) {
    return true;
  } else {
    return false;
  }
}