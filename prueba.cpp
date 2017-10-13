#include <stdio.h>

main()
{
	int x = 5;
	while(true)
	{
		if(x == 0)
			x = 10;
		else
			x--;
		printf("%d\n", x);
		if(x == 6) break;
	}
}