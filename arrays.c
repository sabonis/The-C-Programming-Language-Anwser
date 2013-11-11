#include <stdio.h>

main()
{
	int i;
	int numbers[10];

	numbers[2] = 3;
	for(i = 0; i < 10; i++) {
		printf("%d\n", numbers[i]);
	}

}
