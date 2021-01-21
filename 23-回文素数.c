#include<stdio.h>
int sushu(int num){
	int result,i;
	for(i=2;i<num;i++){
		if(num%i==0){
			return 0;
		}
	}
	result = huiwen(num);
	return result;
	
}
int huiwen(int num){
	int sum=0,jum=num;
	while(num>0){
		sum=sum*10+num%10;
		num/=10;
	}
	if(jum==sum){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n=0,i;
	for(i=100;i<=1000;i++){
		if(sushu(i)){
			if(n++%5==0){
				printf("\n");
			}
			printf("%d\t",i);
		}
	}
	return 0;
}
