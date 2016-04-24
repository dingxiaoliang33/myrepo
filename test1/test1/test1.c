#include <stdio.h>
int gcd(int n, int m)
{
	int r;
	while (m != 0){
		r = n%m;
		n = m;
		m = r;
	}
	return n;
}
int main1()
{
	int n,b, a = 0;
	while (scanf_s("%d%d", &n, &a) == 2)
	{
		for (int i = 0; i < n; i++)
		{

			//while (scanf_s("%d", &b) == 1)
			if(scanf_s("%d", &b) == 1)
			{
				if (a >= b)
				{
					a += b;
				}
				else
				{
					a += gcd(a, b);
				}
			}
		}
		printf("%d\n", a);
	}

	return 0;
}
