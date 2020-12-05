#include<stdio.h>



int main(){
	int n=0,temp;
	float fz=2,sum=0,fm=1;
	
	for(n=1;n<=20;n++){
		
		sum = sum+fz/fm;
		temp = fz;
		fz = fz+fm;
		fm = temp;		
	}
	
	printf("%f",sum);	
	
	
	return 0;
}
