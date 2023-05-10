#include <stdio.h>
#include <stdlib.h>
#define X (10)
#define Y (10)

int main(){
	srand(2);

	int min = -50, max = 100;
	int x[X][Y] = {0};
	for(short i = 0 ; i<X;i++){
		for(short j = 0 ; j<Y;j++){
			x[i][j] = (rand()%(max-min+1))+min;
		}
	}
	for(short i = 0 ; i<X;i++){
		for(short j = 0 ; j<Y;j++){
			printf("%d, ",x[i][j]);
		}
		printf("\n"); 
	}
	return 0;
}