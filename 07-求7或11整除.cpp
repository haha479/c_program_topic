#include<stdio.h>
/*求出1-1000内能被7或11整除，但不能同时被7和11整除的整数*/

int main(){
	
	int n=0,i;
	for(i=1;i<=1000;i++){
		if(i%7==0 && i%11==0){
			continue;
		}
		if(i%7==0 || i%11==0){
			printf("%5d",i);
			if(++n%5==0){
				printf("\n");
			}
			
		}
	}
	
	
	
	
	
	
	return 0;
}
