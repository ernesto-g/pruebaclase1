#include <stdio.h>
#include <stdlib.h>

#define TAM		3


int main(void)
{
	setbuf(stdout,NULL);// SIEMPRE

	int nro;
	int acu=0;
	float promedio;
	int i;
	int continuar;

	for (i = 0 ; i < TAM ; i++)
	{
		printf ("ingrese nro ");
		scanf("%d",&nro);

		printf (" Continuar? [si:1 / no:0]:");
		scanf("%d",&continuar);
		if(continuar==0)
			break;

		acu = acu + nro;
	}

	printf("i: %d\n",i);

	//promedio = acu / TAM;
	promedio = ((float)acu) / i;

	printf("promedio: %.2f\n",promedio);
}
