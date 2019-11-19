#include<stdio.h>
#define n 6
main(){
	int A[n][n],W[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i==j) {
				A[i][j] = 0;
			}
			else {
				printf("A[%d][%d] : ",i+1,j+1);
				scanf("%d",&A[i][j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i==j) {
				W[i][j] = A[i][j];
			}
			else {
				if (A[i][j] != 0) {
					printf("W[%d][%d] : ",i+1,j+1);
					scanf("%d",&W[i][j]);
				}
				else {
					W[i][j]=100;
				}
			}
		}
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (W[i][k] + W[k][j] < W[i][j]) {
					W[i][j] =  W[i][k] + W[k][j];
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d",W[i][j]);
		}
		printf("\n");
	}
}
