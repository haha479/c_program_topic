#include<stdio.h>
/*
求出1-100以内所有每位数的乘积小于每位数的和的数.例如:13满足 1*3<1+3
*/

int main(){
	int num,a,b;
	for(num=1;num<=50;num++){
		 a=num/10;
		 b=num%10;
		 if(a*b<a+b){
		 	printf("%d\t",num);
		 }
	} 
	
	
	
	
	
	
	
}
