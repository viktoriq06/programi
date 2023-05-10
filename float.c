#include <stdio.h>
void my_funk(float *x );
int main(){
    
	float x = 2 , z=4;
	scanf("%f\n",&x);
    my_funk(&x);
	//printf("%p\n",ptr);
	printf("%f\n",x);

	return 0;
} 

void my_funk(float *x ){
	*x=10**x;
}
