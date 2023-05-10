#include <stdio.h>

int main(){

	float x = 2 , z=4;
	float *ptr = &x;
    //ptr++;
	printf("%p\n",ptr);
	printf("%f\n",*ptr);
	return 0;
}