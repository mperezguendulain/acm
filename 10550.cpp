#include <stdio.h>

main()
{
	int posIni, comb1, comb2, comb3;
	int grados;

	while(scanf("%d %d %d %d", &posIni, &comb1, &comb2, &comb3), (posIni || comb1 || comb2 || comb3))
	{
		// 1.- girar 2 veces completamente
		grados = 720;

		// 2.- y parar en el primer numero de la combinacion
		while(posIni != comb1)
		{
			grados += 9;
			posIni = posIni == 0 ? 39 : (posIni - 1);
		}

		// 3.- girar hacia la izquierda 1 vez completamente
		grados += 360;

		// 4.- continuar girando hacia la izquierda hasta alcanzar el 2do numero
		while(posIni != comb2)
		{
			grados += 9;
			posIni = (posIni + 1) % 40;
		}

		// 5.- gira la marca hasta que el 3er numero sea alcanzado
		while(posIni != comb3)
		{
			grados += 9;
			posIni = posIni == 0 ? 39 : (posIni - 1);
		}
		
		printf("%d\n", grados);
	}
}