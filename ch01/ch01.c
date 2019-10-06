#include <stdio.h>
int main ()
{
	int width;
	int height;
	puts("求长方形的面积。");
	scanf("%d", &width);
	scanf("%d", &height);
	printf("printf(\"长:\"), printf(\"宽:\"), 面积是 %d。\a\n", width * height);
    return 0;
}