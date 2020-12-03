#include<stdio.h>



int main(){
	
	int index=3,i,j,jsum,zsum=0;
	for(i=1;i<=index;i++){
		jsum=1;
		for(j=1;j<=i;j++){
			jsum*=j;
		}
		zsum+=jsum;
	}
	printf("%d", zsum);
	return 0;
}
