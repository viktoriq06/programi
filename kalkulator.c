#include<stdio.h>
long func(int x1 ,int x2);
int main()
{  
	int num1 = 0, num2 = 0;
	char op = 0;
	scanf("%d%c%d",&num1,&op,&num2);
	printf("%d%c%d",num1,op,num2);


    if(op == '+'){
    	long sum = num1+num2;
    	printf("=%d",sum);
    }
    if(op == '-'){
    	long sub = num1-num2;
    	printf("=%d",sub);
    }

    if(op == '*'){
    	long mul = num1*num2;
    	printf("=%d",mul);
    }

    if(op == '/'){
    	float div = (float)num1/num2;
    	printf("=%f",div);


    }
    
    if(op == '%'){
    	//long rem = num1%num2;
    	long rem = func(num1,num2);
    	printf("=%d",rem);
    }

    if(op == 's'){
  		float y = 1;
  		for( short z = 0;z<num2;z++){
  			y=0.5*(y+num1/y);
  		}
    	printf("=%f",y);
    }
    if(op == 'p'){
  		float y = 2;
  		float x = 2;

  		for( short z = 0;z<num2;z++,x+=2){
  			y *= (x*x)/((x-1)*(x+1));
  		}
    	printf("=%f",y);
    }

	return 0;
}
 
long func(int x1 ,int x2){
	long x3 = x1/x2;
	long x4 = x3*x2;
	long x5 = x1-x4;
	return x5;
}