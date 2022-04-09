#include <stdio.h>

int main()
{
	int N = 0;
	int num = 0;
	int hap = 0;
	int hap2 = 0;
	int cycle = 0;
	int units = 0;
	int tens = 0;

	scanf("%d", &N);

	if (N < 10)
	{
		N = N * 10;
	}

	units = N % 10;
	tens = N / 10;

	while (N >= 0)
	{

		hap = tens + units;

		hap2 = units*10 + hap%10;

		tens = hap2 / 10;
		units = hap2 % 10;

		cycle++;

		if (hap2 == N)
		{
			printf("%d", cycle);

			break;
		}
	}

	return 0;
}
