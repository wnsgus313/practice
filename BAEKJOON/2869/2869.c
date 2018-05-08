nclude <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int A, B, V;
    int dis = 0;
    int day = 0;

    scanf("%d %d %d", &A, &B, &V);

    dis = A - B;

    day = (V-B-1) / dis; // 나는 day = (V-B) / dis까지밖에 생각 못함

    printf("%d\n", day+1); //여기서도 +1을 생각못했다

    return 0;
}

