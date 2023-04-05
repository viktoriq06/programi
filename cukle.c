#include <stdio.h>

long factorial(short num);

int main(){
	short num = 8;
	
	printf("=%d",factorial(num));
	return 0;
}


long factorial(short num){
	long result = 1;
	for(short x = 1;x<=num;x++){
		result=result*x;
	}   
	return result;
}