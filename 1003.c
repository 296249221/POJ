// float除法
#include<stdio.h>

int main()
{
	int num;
	float sum;
	float input;

	while (~scanf("%f", &input))
	{
		if (input == 0.00)
		{
			break;
		}
		num = 0;
		sum = 0;
		while (sum < input)
		{
			num++;
			sum = sum + (float)1 / (num + 1);
		}
		printf("%d card(s)\n", num);
	}
	return 0;
}