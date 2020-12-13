#include<stdio.h>
int main(){
	int arr[5][4]={{12,13,21,31},{12,21,31,11},{41,44,24,55},{66,11,45,65},{21,90,12,13}};
	int i,j,k,num,n,m;
	float temp,ave=0,avearr[5];
	for(i=0;i<5;i++){
		num=0;
		for(j=0;j<4;j++){
			num+=arr[i][j];
		}
		ave = num/4.0;
		avearr[i] = ave;
		
	}
	for(k=0;k<5;k++){
		printf("第%d位:%.2f\n",k+1,avearr[k]);
	}
	for(n=0;n<5;n++){
		for(m=4;m>n;m--){
			if(avearr[m]>avearr[m-1]){
				temp = avearr[m];
				avearr[m] = avearr[m-1];
				avearr[m-1] = temp;
			}
		}
	}
	printf("排序后\n");
	for(k=0;k<5;k++){
		printf("第%d位:%.2f\n",k+1,avearr[k]);
	}
	return 0;
}
