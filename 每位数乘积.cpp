#include<stdio.h>
/*
���1-100��������ÿλ���ĳ˻�С��ÿλ���ĺ͵���.����:13���� 1*3<1+3
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
