#include <stdio.h>


int main(int argc, char *argv[]){

	char input1[20];
	
	printf("What is your name?");
	scanf("%s",input1);
	printf("hello %s,%s!\n", argv[1],input1);
	return 0;
}