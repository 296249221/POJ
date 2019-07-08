#include<stdio.h>

int main()
{
	int p;
	int e;
	int i;
	int d;
	int l;
	int m;
	int n;
	int output;
	int c = 1;
	int cycle1 = 23;
	int cycle2 = 28;
	int cycle3 = 33;

	while (~scanf("%d%d%d%d", &p, &e, &i, &d))
	{
		if (p == -1 && e == -1 && i == -1 && d == -1)
		{
			break;
		}
		for (n = 1; n <= cycle1 * cycle2; n++)
		{
			for (m = 1; m <= cycle1 * cycle3; m++)
			{
				if (e + cycle2 * m < i + cycle3 * n)
				{
					continue;
				}
				else if (e + cycle2 * m > i + cycle3 * n)
				{
					break;
				}
				else
				{
					for (l = 1; l <= cycle2 * cycle3; l++)
					{
						if (p + cycle1 * l < e + cycle2 * m)
						{
							continue;
						}
						else if (p + cycle1 * l > e + cycle2 * m)
						{
							break;
						}
						else
						{
							if (output <= 0)
							{
								output = output + cycle1 * cycle2*cycle3;
							}
							if (output > cycle1*cycle2*cycle3)
							{
								output = output - cycle1 * cycle2*cycle3;
							}
							printf("Case %d: the next triple peak occurs in %d days.\n", c, output);
							break;
						}
					}
					break;
				}
			}
		}
		c++;
	}
	return 0;
}