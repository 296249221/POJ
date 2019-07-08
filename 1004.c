//保留两位小数的输出
#include <stdio.h>

int main()
{
	float account[12];
	float average=0;
	int i;

	for (i = 0; i < 12; i++)
	{
		scanf("%f", &account[i]);
		average = average + account[i];
		
	}
	average = (float)average / 12;
	printf("$%.2f", average);
}