#include<stdio.h>

int s,m,n,num,gongbei;
int gongyue(int m,int n){
	while (m%n!=0){
		s=m%n;
		m=n;
		n=s;
	}
	return n;
}

int main(){
	printf("����������������,�ÿո����:");
	scanf("%d%d", &m,&n);
	num = gongyue(m,n);
	gongbei = m*n/num;
	printf("���Լ��Ϊ:%d\n", num);
	printf("��С������Ϊ:%d", gongbei);
	return 0;
} 




