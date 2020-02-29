#include <stdio.h>


void swap(int *a, int *b){
	int  temp; 
	temp=*b;
	*b=*a;
	*a=temp;
}

int main(){

	int a=1;
	int b=2;

	swap(&a,&b);
	printf("a: %d| b: %d\n",a,b);

	return 0;
}