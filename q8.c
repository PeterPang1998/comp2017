#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int atoi(const char s[]){
	//it is not the most efficient way, but I do this for practicing 
	//malloc
	int length= strlen(s);
	int isnegative=0;
	int temp1=1;
	int total=0;
	int *p;
	p=(int*) malloc(length*sizeof(int));
	int i;
	if(s[i]==45){//ascii for negative sign "-" is 45
		i=1;
		isnegative=1;
	}
	else{
		i=0;
	}
	for(int i=0; i<strlen(s);i++){
		int tempInt= (s[i]-48);
		*(p+i)=tempInt;
		
	}
	if(isnegative){
		int j=length-1;

	while(j>=1){
		int temp=*(p+j);
		// printf("%d\n",temp);
		total=total+(temp1*temp);
		temp1=temp1*10;
		j--;
		}
	}else{
		int j=length-1;

		while(j>=0){
			int temp=*(p+j);
			// printf("%d\n",temp);
			total=total+(temp1*temp);
			temp1=temp1*10;
			j--;
		}
	}
	if(isnegative==1){
		total=total*(-1);
	}
	return total;
}



int main(){

	char a[100]="-232323232";
	int b=atoi(a);
	printf("%d\n",b);
	return 0;
}