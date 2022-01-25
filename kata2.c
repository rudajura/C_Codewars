/*
Welcome.

In this kata you are required to, given a string, replace every letter with its position in the alphabet.

If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.
Example

alphabet_position("The sunset sets at twelve o' clock.")

Should return "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" ( as a string )
*/


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// returned string has to be dynamically allocated and will be freed by the caller
char *alphabet_position(const char *text) {
  
  int x = strlen(text);
  char *message = malloc(x);
  int j = 0;
  for(int i = 0; i <= x; i++) {
    if(i == x) {
      message[j] = '\0';
      break;
    }
    switch(text[i])
    {
        case 'A':
        case 'a':
          message[j] = 1;
          j++;
          continue;
        case 'B':
        case 'b':
          message[j] = 2;
          j++;
          continue;
        case 'C':
        case 'c':
          message[j] = 3;
          j++;
          continue;
        case 'D':
        case 'd':
          message[j] = 4;
          j++;
          continue;
        case 'E':
        case 'e':
          message[j] = 5;
          j++;
          continue;
        case 'F':
        case 'f':
          message[j] = 6;
          j++;
          continue;
        case 'G':
        case 'g':
          message[j] = 7;
          j++;
          continue;
        case 'H':
        case 'h':
          message[j] = 8;
          j++;
          continue;
        case 'I':
        case 'i':
          message[j] = 9;
          j++;
          continue;
        case 'J':
        case 'j':
          message[j] = 10;
          j++;
          continue;
        case 'K':
        case 'k':
          message[j] = 11;
          j++;
          continue;
        case 'L':
        case 'l':
          message[j] = 12;
          j++;
          continue;
        case 'M':
        case 'm':
          message[j] = 13;
          j++;
          continue;
        case 'N':
        case 'n':
          message[j] = 14;
          j++;
          continue;
        case 'O':
        case 'o':
          message[j] = 15;
          j++;
          continue;
        case 'P':
        case 'p':
          message[j] = 16;
          j++;
          continue;
        case 'Q':
        case 'q':
          message[j] = 17;
          j++;
          continue;
        case 'R':
        case 'r':
          message[j] = 18;
          j++;
          continue;
        case 'S':
        case 's':
          message[j] = 19;
          j++;
          continue;
        case 'T':
        case 't':
          message[j] = 20;
          j++;
          continue;
        case 'U':
        case 'u':
          message[j] = 21;
          j++;
          continue;
        case 'V':
        case 'v':
          message[j] = 22;
          j++;
          continue;
        case 'W':
        case 'w':
          message[j] = 23;
          j++;
          continue;
        case 'X':
        case 'x':
          message[j] = 24;
          j++;
          continue;
        case 'Y':
        case 'y':
          message[j] = 25;
          j++;
          continue;
        case 'Z':
        case 'z':
          message[j] = 26;
          j++;
          continue;
    default:
      continue;
    }
  }
    int len = strlen(message);
    char *str = (char*)malloc(sizeof(char) * strlen(message));
    char *temp = (char*)malloc(sizeof(char) * 2);
    for(int i = 0; i < len; i++) {
        if(i == len - 1) {
          sprintf(temp, "%d", message[i]);
            strcat(str, temp);
            break;
        }
        sprintf(temp, "%d ", message[i]);
        if(i == 0) {
            sprintf(str, "%d ", message[i]);
        }
        if(i > 0) {
            strcat(str, temp);
        }
    }

  return str;
}
