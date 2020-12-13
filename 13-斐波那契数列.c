#include<stdio.h>


int main(){
	
	int arr[40]={1,1};
	int i,j,n=0;
	for(i=2;i<40;i++){
		arr[i] = arr[i-1]+arr[i-2];
	}
	
	for(j=0;j<40;j++){
		if(n++%5==0){
			printf("\n");
		}
		printf("%d  ",arr[j]);
	}
	
	
	
	
	
	return 0;
}
