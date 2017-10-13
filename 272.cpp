// 272 - TEX Quotes

#include <iostream>
#include <stdio.h>
using namespace std;

main()
{
	string linea;
	string str_res = "";
	bool ini_comilla = true;

	while(getline(cin, linea))
	{
		str_res = "";
		int tam = linea.size();
		for(int i = 0; i < tam; i++)
		{
			if(linea[i] == '"')
			{
				if(ini_comilla)
				{
					ini_comilla = false;
					str_res += "``";
				}
				else
				{
					ini_comilla = true;
					str_res += "''";
				}
			}
			else
				str_res += linea[i];
		}
		cout << str_res << endl;
	}
}