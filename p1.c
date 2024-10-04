#include<stdio.h>

void main(){
	int a[10];
	printf("Enter 10 values\n");	
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);

	printf("Array:\n");
	for(int i=0;i<10;i++)
		printf("%d\t", a[i]);
}
