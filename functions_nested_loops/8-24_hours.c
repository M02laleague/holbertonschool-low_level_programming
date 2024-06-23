#include "main.h"

/**
* jack_bauer - print 24 hours
* Return: Always 0.
*/

void jack_bauer(void)
{
	int h, hu, m, mu;

	for (h = 48; h <= 50; h++)
	{
		for (hu = 48; hu <= 57; hu++)
		{
			for (m = 48; m <= 53; m++)
			{
				for (mu = 48; mu <= 57; mu++)
				{
					if (h == 50 && hu > 51)
					{
						break;
					}
					else
					{
						_putchar(h);
						_putchar(hu);
						_putchar(':');
						_putchar(m);
						_putchar(mu);
						_putchar('\n');
					}
				}
			}
		}
	}
}
