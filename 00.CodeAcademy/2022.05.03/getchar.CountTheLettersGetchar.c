#include <stdio.h>

int main(void)
{
    char c;
	int counter = 0;
	
	while((c = getchar()) != EOF)
	{
		counter++;
	}
	/*Break the loop with ctrl+c.*/
	printf("%d\n", counter);

    return 0;
}