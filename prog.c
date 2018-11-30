#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <crypt.h>

int main(void) {
  char *str = NULL, *hash = NULL;
  scanf("%s", str);
  scanf("%s", hash);
  if (str == NULL || hash == NULL) {
    printf("error\n");
  }else{
  char *realHash = crypt(str, "00");
  if (realHash == NULL)
    printf("error\n");
  else if (strcmp(hash, realHash) == 0)
    printf("allow\n");
  else
    printf("deny\n");
  }
  return 0;
}
