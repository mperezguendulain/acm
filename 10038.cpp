//Checar bien que es lo que pide el problema
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

bool esJollyJumper(vector<int> secuencia);

main()
{
	int num_nums, num;
	vector<int> secuencia;

	while(scanf("%d", &num_nums) != EOF)
	{
		while(num_nums--)
		{
			scanf("%d", &num);
			secuencia.push_back(num);
		}
		if(esJollyJumper(secuencia))
			printf("Jolly\n");
		else
			printf("Not Jolly\n");
		secuencia.clear();
	}
}

bool esJollyJumper(vector<int> secuencia)
{
	int tam_sec = secuencia.size();
	if(tam_sec == 1)
		return true;

	vector<int> diferencias;
	for(int i = 0; i < tam_sec - 1; i++)
		diferencias.push_back(abs(secuencia[i] - secuencia[i+1]));

	//Verificando que las diferencias sean de 1
	int num_dif = diferencias.size();
	for(int i = 0; i < num_dif - 1; i++)
	{
		if(abs(diferencias[i] - diferencias[i+1]) != 1)
			return false;
	}
	return true;
}