#include <stdio.h>

main()
{
	int num1, num2;
	int cont = 0;

	while(scanf("%d %d", &num1, &num2) != EOF)
	{
		if(cont++ != 0)
			printf("\n");
		printf("%d\n", num1 + num2);
	}
}