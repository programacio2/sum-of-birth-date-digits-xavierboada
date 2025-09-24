#include<stdio.h>
int main()
{
	int dia, mes, any;
	printf("Diguem el teu dia de naixement: ");
	scanf_s("%d", &dia);
	printf("Diguem el teu mes de naixement: ");
	scanf_s("%d", &mes);
	printf("Diguem el teu any de naixement: ");
	scanf_s("%d", &any);
	while (dia > 31)
	{
		printf("Diguem el teu dia de naixement: ");
		scanf_s("%d", &dia);
	}
	while (mes > 12)
	{
		printf("Diguem el teu mes de naixement: ");
		scanf_s("%d", &mes);
	}
	while (any < 1000 || any > 9999)
	{
		printf("Diguem el teu any de naixement: ");
		scanf_s("%d", &any);
	}

	if ((any > 1000 && any < 9999) && mes <= 12 && dia <= 31)
	{
		printf("El resultat es:%d", dia + mes + any);
	}

}