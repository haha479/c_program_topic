#include<stdio.h>

int main(){
	int i,jsum=0,osum=0;
	for(i=1;i<=5;i++){
		if(i%2==0){
			osum+=i;
		}
		else{
			jsum+=i;
		}
	}
	printf("%d\n%d", jsum,osum);
	
	return 0;
}
