#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *scales[]={"C", "F", "K"};
float lowest[]={-273.15f, -459.67f, 0.0f};
float * transfer(float t, int ret)
{
    if (t<lowest[ret])
    {
        printf("%.2f ", t); printf ("%s:\n",scales[ret]);
        printf ("That's an absolute zero, even less");
        return NULL;

    }

    switch(ret)
    {
    case 0:
        printf("%.2f ", t); printf ("%s:\n",scales[0]);
        printf("%.2f ", ((9.0f / 5.0f) * t + 32.0f)); printf("%s\n", scales [1]);
        printf("%.2f ", (t + 273.15f)); printf("%s\n", scales[2]);
		break;
    case 1:
        printf("%.2f ", t); printf ("%s:\n",scales[1]);
        printf("%.2f ", ((5.0f / 9.0f) * (t - 32.0f))); printf ("%s\n",scales[0]);
        printf("%.2f ", ((5.0f / 9.0f) * (t - 32.0f) + 273.15f)); printf("%s\n", scales[2]);
		break;
    case 2:
        printf("%.2f ", t); printf ("%s:\n",scales[2]);
        printf("%.2f ", (t - 273.15f)); printf ("%s\n",scales[0]);
        printf("%.2f ", (((9.0f / 5.0f) * (t - 273.15f) + 32.0f))); printf("%s\n", scales[1]);
        break;
    }
    return NULL;
}
int main(int n, char *sca[])
{
    int i,y;
    y=0;
    switch (n)
    {
        case 1:
            printf("There is literally no input");
            break;
        case 2:
            i=0;
            float data1=atof(sca[1]);
            while (i<=2)
            {
                transfer(data1, i);
                i++;
            }
            break;
        case 3:

            i=0;
            float data2=atof(sca[1]);
            while (i<=2)
            {
                if (strcmp(scales[i], sca[2])== 0)
                {
                    y++;
                    transfer(data2, i);
                }
                i++;
            }
            if (y==0)
                printf("I do not seem to comprehend to which scale you are referring to as %s", sca[2]);
            break;
        default:
            printf("That seems to be the wrong amount of data");
            break;
    }
    return 0;
}
