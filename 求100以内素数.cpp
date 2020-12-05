#include<stdio.h>


int main(){
	int i,j,temp=1;
	for(i=1;i<=100;i++){
		temp=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				temp=0;
				break;
			}
		}
		if(temp==1){
			printf("%d\n",i);
		}
	}
	
	
	
	
	return 0;
}

