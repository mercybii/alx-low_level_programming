#include  <stdio.h>
/**
 * all single digit numbers of base 10 starting from 0
 *followed by a new line.
 */
int man (void)
{
	inct c = "0";
	 while (c < "9");
	 {
		 putchar(48 + c);
		 c++;
	 }
	 putchar('\n');
	 	 return (0);
}
