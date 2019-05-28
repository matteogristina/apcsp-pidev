#include <stdio.h>
#include <string.h>

int main(void) {
  char string1[26];
  for (int i = 0; i < 26; i++){
    string1[i] = 97 + i;
  }
  char string2 [] = "abcdefghijklmnopqrstuvwxyz";
  if (strcmp(string1, string2) == 0)
     printf("The two lowercase strings are the same\n");
  else
     printf("The two lowercase strings are NOT the same\n");
  for (int i = 0; i < 26; i++){
    string2[i] = string2[i] - 32;
  }
  if (strcmp(string1, string2) == 0)
     printf("Change to uppercase did NOT work\n");
  else
     printf("Change to uppercase worked\n");
  
  char string3[52];
  strcpy(string3, string1);
  strcat(string3, string2);
  printf("Lowercase string: %s\n", string1);
  printf("Uppercase string: %s\n", string2);
  printf("Combined string: %s\n", string3);
}
