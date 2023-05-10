#include <stdio.h>
#define POS (30000)

int main(){

	int x[POS] = {0};
	for(short i = 0 ; i<POS;i++){
		x[i] = 3*i;
	}
	for(short i = 0 ; i<POS;i++){
		printf("%d, \n",x[i]);
	}
	return 0;
}