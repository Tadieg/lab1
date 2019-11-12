
#include<stdio.h>
void fibonaciByReference(int*n);
int main(){
	int n;
	printf("enter the number n  ");
	scanf("%d",&n);
        fibonaciByReference(&n);
}

 void fibonaciByReference(int*n){
 	int i;
 	int arr[*n];
 	arr[0]=0,arr[1]=1;
	for(i=2;i<*n;i++){
	arr[i]=arr[i-1]+arr[i-2];
	}
	printf("*==========fibonaci by reference===============*\n");
	for(i=0;i<*n;i++){
		printf("%d\n",arr[i]);
	}
}
