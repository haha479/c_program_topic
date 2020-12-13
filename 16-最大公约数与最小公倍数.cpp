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
	printf("请输入两个正整数,用空格隔开:");
	scanf("%d%d", &m,&n);
	num = gongyue(m,n);
	gongbei = m*n/num;
	printf("最大公约数为:%d\n", num);
	printf("最小公倍数为:%d", gongbei);
	return 0;
} 




