#include <stdio.h>
#include <stdlib.h>

#include "array.h"

int main()
{
	array_t array;

	init_array(&array, 1, "nigger");
	array_append(&array, "faggot");

	printf("%s\n", array.items[0]);
	printf("%s\n", array.items[1]);

	return 0;
}
