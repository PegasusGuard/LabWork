#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ax, ay, bx, by, cx, cy;
    float a, b, c, P, PP, S;
    printf("ax ay: ");
    scanf("%d %d", &ax, &ay);

    printf("bx by: ");
    scanf("%d %d", &bx, &by);

    printf("cx cy: ");
    scanf("%d %d", &cx, &cy);
    a=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
    printf("a = %.2f\n", a);
    b=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
    printf("b = %.2f\n", b);
    c=sqrt((cx-ax)*(cx-ax)+(cy-ay)*(cy-ay));
    printf("c = %.2f\n", c);

    P=a+b+c;
    PP=P/2;
    S=sqrt(PP*(PP-a)*(PP-b)*(PP-c));
    printf("P = %.2f\n",P);
    printf("S = %.2f",S);
    return 666;
}
