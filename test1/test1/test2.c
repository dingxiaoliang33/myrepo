#include <stdio.h>
int Distance(int x1, int y1, int x2, int y2)
{
	return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
}
int main()
{
	int r, x0, x1, x2, x3, y0, y1, y2, y3;
	int count = 0;
	while (scanf_s("%d%d%d%d%d%d%d%d%d", &r, &x1, &y1, &x2, &y2, &x3, &y3, &x0, &y0) == 9)
	//if(scanf_s("%d%d%d%d%d%d%d%d%d", &r, &x1, &y1, &x2, &y2, &x3, &y3, &x0, &y0)==9)
	{
		if (r*r >= Distance(x1,y1,x0,y0))
		{
			++count;
		}
		if (r*r >= Distance(x2, y2, x0, y0))
		{
			++count;
		}
		if (r*r >= Distance(x3, y3, x0, y0))
		{
			++count;
		}

		printf("%dx\n",count);
		count = 0;
	}
	return 0;
}