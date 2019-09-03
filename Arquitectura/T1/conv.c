#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int i;
	int j = 0;
	float numero = 1234567890987654321;
	float mayor = numero;
	for (int i = 63; i >= 0; i--)
	{
		//printf(" %d %.0f\n",i, pow(2,i));
		
		if (j > 3)
		{
			printf("\n");
			j = 0;
		}
		j++;
		if ((mayor - pow(2,i)) < 0)
		{
			//printf("0");
			printf("%d %.0f %.0f\n", i, (mayor - pow(2,i)), pow(2,i) );
		}else{
			//printf("1");
			printf("%.0f\n", mayor);
			printf("%d %.0f %.0f\n", i, (mayor - pow(2,i)), pow(2,i) );
			mayor = mayor - pow(2,i);
			
		}
		//printf("%f\n",mayor );
	}
	printf("\n");
	return 0;
}