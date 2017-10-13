#include <stdio.h>

main()
{
	int num_cases, num1, num2;

	scanf("%d", &num_cases);
	while(num_cases--)
	{
		scanf("%d %d", &num1, &num2);
		if(num1 == num2)
			printf("=\n");
		else if(num1 < num2)
			printf("<\n");
		else
			printf(">\n");
	}
}