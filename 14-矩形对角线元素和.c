#include<stdio.h>


int main(){
	
	
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int i,j,sum;
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j || i+j==2)
			sum += arr[i][j];
		}
	}

	printf("%d",sum);	
	
	
	return 0;
}
