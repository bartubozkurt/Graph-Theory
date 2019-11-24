#include<stdio.h>
#define n 3
int main(){
		int A[n][n],d[n];
		int i,j;
		int top,min,max;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if(i==j) A[i][j] = 0;
				else{
					printf("%d tepe bilgisi giriniz :",i+1,j+1);
					scanf("%d",&A[i][j]);
				}
			}
		}
		for (i = 0; i < n; i++) {
			top = 0;
			for (j = 0; j < n; j++) {
				top += A[i][j];
				printf("%d tepesinin derecesi = %d\n",i,top);
				d[i] = top;
			}
		}
		min = d[0];
		for (i = 1; i < n; i++) {
			if(d[i] < min ) min = d[i];
			printf("Cizgenin min derecesi : %d\n",min);
		}
		max = d[0];
		for (i = 1; i < n; i++) {
			if(d[i] > max )  max = d[i];
			printf("Cizgenin max derecesi = %d\n",max);

		}
	return 0;
}
