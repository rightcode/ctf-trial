#include <stdio.h>
#include <string.h>

int main(void)
{
  char flag[] = "fsdz{Fdhvdu_flskhu_lv_fodvvlfdo_flskhu}";

  int i;

  for (i = 0;i < sizeof(flag) - 1; i++)
  {
    if (flag[i] == '}' | flag[i] == '{' | flag[i] == '_') // 英字以外を変換除外
    {
      continue;
    }
    flag[i] -= 3;
  }
  printf("%s", flag);
}
