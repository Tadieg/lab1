
#include<stdio.h>
int main(){
    int l,i;
    printf("Enter the length of the fibonacci \n");
    scanf("%d",&l);
    int fib[l];
    for(i=0;i<=l;i++){
     if(i<2){
     fib[i]=i;
 }else{
        fib[i]=fib[i-1]+fib[i-2];
}
    }
    displayFibonanci2(&fib,l);

    }

    void displayFibonanci2(int *fib[],int l){
    	int j;
      for( j=0;j<=l ;j++){
          printf("%d \t",*(fib+j));
    }

    }
