#include <stdio.h>

int maxi(int a,int b){
	return a>b ? a:b;
}

int main(){
	int x,y;
	printf("Input two integers:\n");
	scanf("%d %d",&x, &y);
	printf("The bigger one of %d and %d is %d.\n",a, b, maxi(a, b));
	return 0;
}