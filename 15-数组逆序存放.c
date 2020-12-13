#include<stdio.h>

int main(){
	
	int arr[5] = {2,3,4,5,6};
	int i,j,temp;
	for(i=0;i<2;i++){
		temp = arr[i];
		arr[i] = arr[4-i];
		arr[4-i] = temp;
		
	}
	
	
	for(j=0;j<5;j++){
		printf("%d",arr[j]);
	}
	
	
	
	
	return 0;
}
