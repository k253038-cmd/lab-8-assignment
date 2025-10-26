#include<stdio.h>
int main(){
	int n, i, j;
	printf("enter  a number ");
	scanf("%d", &n);
	for(i=1; i<=10; i++){
		for(j=1; j<=1; j++){
		
		printf("%d x %d=%d\n", n, i,n*i);
	}
		}
	printf("\n");
	return 0;
}
