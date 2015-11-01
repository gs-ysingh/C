  #include <stdio.h>

int global_val = 10;

int main(int argc, char const *argv[])
{
	//_private_name - if starts with single underscore then private variable
	//__system_name - if starts with double underscore then they are system level

	int i; //Some ide may give warning since it's not used

	char *s = "Yogesh Singh";

	printf("%s\n", s);

	if(1) {
		int number = 7;
		printf("%d\n", number);
	}

	//C supports block level scoping, so number cannot be accessed here

	printf("%d\n", global_val);
	//global_val2 cannot be accessed since it's declared after the block -  printf("%d\n", global_val2);

	return 0;
}

int global_val2 = 20;