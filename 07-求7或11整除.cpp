#include<stdio.h>
/*���1-1000���ܱ�7��11������������ͬʱ��7��11����������*/

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
