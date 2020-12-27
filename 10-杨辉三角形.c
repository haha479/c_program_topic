#include<stdio.h>
/*
打印杨辉三角形前10行 
如:
1
1 1
1 2 1 
1 3 3 1
1 4 6 4 1
*/

int main(){
	
	int arr[10][10]; 
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<=i;j++){
			if(j==0 || i==j){
				arr[i][j]=1;
			}
			else{
				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
			}
		}
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<=i;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}	
	
	
	
	
	return 0;
}
