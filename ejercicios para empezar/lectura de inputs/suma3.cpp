#include <stdio.h>

main()
{
	int num1, num2;
	while(scanf("%d %d", &num1, &num2), (num1 || num2))
		printf("%d\n", num1 + num2);
}