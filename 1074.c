#include <stdio.h>

int main()
{
    int N, v;
    if (scanf("%d", &N) != 1)
    return 0;
    for (int i = 0; i < N; i++) {
        if (scanf("%d", &v) != 1)
         break;
        if (v == 0)
        {
            printf("NULL\n");
        } else {
            if (v % 2 == 0)
            printf("EVEN ");
            else printf("ODD ");
            if (v > 0)
             printf("POSITIVE\n");
            else
            printf("NEGATIVE\n");
        }
    }
    return 0;
}
