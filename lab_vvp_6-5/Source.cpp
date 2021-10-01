#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("x = ");
	printf("%d\n", x);
	float y = ((4 * (powf((float)(x - 3), (float)6))) - (7 * (powf((float)(x - 3), (float)3))) + 2);
	printf("y = ");
	printf("%f", y);
}