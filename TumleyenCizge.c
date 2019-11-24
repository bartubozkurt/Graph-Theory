#include<stdio.h>
#define n 3
int main(){
	int A[n][n],i,j,T[n][n];
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if(i==j) A[i][j] = 0;
			else{
				printf("%d ile %d arasindaki komsuluk iliskisini giriniz : ",i+1,j+1);
				scanf("%d\n",&A[i][j]);
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if(i==j) T[i][j] = A[i][j];
			else 	 T[i][j] = 1;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("\t%d",T[i][j]);
		}
		printf("\n");
	}
	return 0;
}
