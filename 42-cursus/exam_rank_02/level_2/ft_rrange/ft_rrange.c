#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int *rrange;
    int i = 0;

    if (start > end)
        rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
    else
        rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
    while(start != end)
    {
        rrange[i++] = end;
        end -= (start > end) ? -1 : 1;
    }
    rrange[i] = end;
    return (rrange);
}

//OTHER FORM
/*int *ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int n = end - start + 1;

	if (start > end)
		return (ft_rrange(end, start));
	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		while (i < n)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	return (range);
}*/
