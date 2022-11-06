#include<stdio.h>

int main()
{
    int a, b=2, c=3, d;
    a = b*c;
    d = a+(b*c);

    /* this is a multiline
    comment */
    while(1)
    {
        if(a == 2)
        {
            // this is anather comment
            printf("Bangladesh\n");
            break;
        }
        else
            a--;
    }
    return 0;
}
