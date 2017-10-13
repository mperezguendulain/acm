#include <stdio.h>

main()
{
	int num_test;
	int num1, num2;
	scanf("%d", &num_test);
	while(num_test--)
	{
		scanf("%d %d", &num1, &num2);
		printf("%d\n", num1 + num2);
	}
}