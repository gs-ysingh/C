#include <stdio.h>

#define FOO //if defined before conditional.h NUMBER = 1 else NUMBER = 2

#include "conditional.h"

int main(int argc, char const *argv[])
{
	printf("%d\n", NUMBER);
}
