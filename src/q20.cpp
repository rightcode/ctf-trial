#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sub(const char *flag, int key)
// int main(int argc, char* argv[]){
{
  int i;
  int j;
  // int key = atoi(argv[2]);
  // const char *flag = argv[1];
  printf("cpaw{");
  for (i = key - 1; i <= strlen(flag); i += key)
  {
    for (j = i; j >= i - key + 1; j--)
    {
      printf("%c", flag[j]);
    }
  }
  printf("}\n");
  return 0;
}

int main(void)
{
  int key;
  for (key = 0; key < 10; key++)
  {
    printf("key=%d : ", key);
    sub("ruoYced_ehpigniriks_i_llrg_stae", key);
  }
}