#include <stdio.h>
#include "myMath/myMath.h"
int main(void)
{
    printf("Hello world \r\n");
    int ret = myAdd(4,5);
    printf("The result is %d \r\n",ret);

    return 0;
}