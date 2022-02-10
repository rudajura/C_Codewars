/*
Complete the solution so that the function will break up camel casing, using a space between words.
Example

"camelCasing"  =>  "camel Casing"
"identifier"   =>  "identifier"
""             =>  ""
*/

#include <stddef.h> // NULL
#include <stdlib.h>
#include <string.h>

//returned buffer should be dynamically allocated and will be freed by a caller
char* solution(const char *camelCase) {
  char *str = malloc(sizeof(char) * strlen(camelCase) * 2);
  int n = 0;
  int x = 0;
  int len = strlen(camelCase);
  while(n <= len) {
    if (camelCase[n] >= 'A' && camelCase[n] <= 'Z') {
      str[x] = ' ';
      x++;
      str[x] = camelCase[n];
      x++;
      n++;
    }
    else {
      str[x] = camelCase[n];
      n++;
      x++;
    }
    if(n == len)
      str[x] = '\0';
  } 
  return str;
