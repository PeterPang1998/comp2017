#include <stdio.h>


int main(int argc, char *argv[]){
	int i=1;//like python, talking in command line argument start with
			//the second character
	while(i<argc){
		printf("%s ",*(argv+i));
		i++;
	}	
	printf("\n");
}