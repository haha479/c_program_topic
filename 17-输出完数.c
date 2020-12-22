#include<stdio.h>
/*完数:一个数的因子之和刚好等于这个数,例如 6=1+2+3. 1,2,3都为6的因子*/


int main(){
	
	
	int sum=0,i,j;
	for(i=1;i<=100;i++){
		sum=0;
		for(j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
			}
		}
		if(sum==i){
			printf("%d\t",i);
		}
	}
	return 0;
}
