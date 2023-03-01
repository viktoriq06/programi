#include <stdio.h>

int main(int argc, char const *argv[])
{ 
	int x_int = 0;
	long x_long = 0;
	short x_short = 0;
	float x_float = 0;
	double x_double = 0;
	char x_char = 0;


	printf("Int = %d B\n",sizeof(x_int));
	printf("long = %d B\n",sizeof(x_long));
	printf("short = %d B\n",sizeof(x_short));
	printf("float = %d B\n",sizeof(x_float));
	printf("double = %d B\n",sizeof(x_double));
	printf("char = %d B\n",sizeof(x_char));

	return 0;
}