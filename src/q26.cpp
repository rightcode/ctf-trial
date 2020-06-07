#include <stdio.h>
using namespace std;
int main(void)
{
    unsigned long int i, k;
    for (i = 0;; i++)
    {
        k = i * 3438478 + 193127;

        if (k % 1584891 == 32134)
        {
            // 結果を出力
            printf("result: %ld\n", k);

            // 1584891で割った時の余りをチェック
            printf("result % 1584891: %ld\n", k % 1584891);

            // 3438478で割った時の余りをチェック
            printf("result % 3438478: %ld\n", k % 3438478);

            break;
        }
    }
}
