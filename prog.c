#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <crypt.h>

int main(void) {
  char *str = NULL, *hash = NULL;
  size_t lstr = 0, lhash = 0;
  getline(&str, &lstr, stdin);
  getline(&hash, &lhash, stdin);
  if (str == NULL || hash == NULL) {
    printf("error\n");
    return 0;
  }
  while(str[strlen(str) - 1] == '\n' || str[strlen(str) - 1] == '\r') str[strlen(str) - 1] = '\0';
  while(hash[strlen(hash) - 1] == '\n' || hash[strlen(hash) - 1] == '\r') hash[strlen(hash) - 1] = '\0';
  char *realHash = crypt(str, "00");
  if (realHash == NULL)
    printf("error\n");
  else if (strcmp(hash, realHash) == 0)
    printf("allow\n");
  else
    printf("deny\n");
  return 0;
}
