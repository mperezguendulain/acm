#include <stdio.h>

int getNumber(char literal);

main()
{
	int s;
	int n;

	// Obtain the remainder (modulo) of S when it is divided by N (N is a power of 2)
	s = getNumber('S');
	n = getNumber('N');

	printf("%d %% %d = %d\n", s, n, s & (n - 1));

	printf("-----------------------------------------\n");
	// Determine if S is a power of 2.
	if (!(s & (s - 1)))
		printf("%d es potencia de 2\n", s);
	else
		printf("%d no es potencia de 2\n", s);

	printf("-----------------------------------------\n");
	// Turn off the last bit in S
	printf("s = %d\n", s);
	printf("apagando el ultimo bit de s es: %d\n", s & (s - 1));

	printf("-----------------------------------------\n");
	// Turn on the last zero in S
	printf("s = %d\n", s);
	printf("prendiendo el ultimo bit  apagado de s es: %d\n", s | (s + 1));

	printf("-----------------------------------------\n");
	// Turn off the last consecutive run of ones in S
	printf("s = %d\n", s);
	printf("Apagando la ultima secuencia de 1's en s: %d\n", s & (s + 1));

	printf("-----------------------------------------\n");
	// Turn on the last consecutive run of zeroes in S
	printf("s = %d\n", s);
	printf("Prendiendo la ultima secuencia de 0's en s: %d\n", s | (s - 1));
}

int getNumber(char literal)
{
	int s;
	printf("Ingresa %c: ", literal);
	scanf("%d", &s);
	return s;
}