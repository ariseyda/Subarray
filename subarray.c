#include<stdio.h>

//Given an array of integers and a number k, where 1 <= k <= length of the array, compute the maximum values of each subarray of length k.
/*For example, given array = [10, 5, 2, 7, 8, 7] and k = 3, we should get: [10, 7, 8, 8], since:
•	10 = max(10, 5, 2)
•	7 = max(5, 2, 7)
•	8 = max(2, 7, 8)
•	8 = max(7, 8, 7)*/

int main(){
	
	int len;
	printf("Enter lenght of array:");
	scanf("%d",&len);
	int array[len];
	int i;
	printf("Enter values of array:");
	for(i=0;i<len;i++){
	   scanf("%d",&array[i]);
	}
	printf("\n[");
	for(i=0;i<len;i++){
		printf("%d",array[i]);
		if(i<len-1){
			printf(",");
		}
	}
	printf("]");
	int k;
	printf("\nEnter the number k(1 <= k <= len):");
	scanf("%d",&k);
	int array1[len-k+1][k];
	int maxi[len-k+1];
	int j,l;
	
	for(j=0;j<len-k+1;j++){
		for(l=0;l<k;l++){
			array1[j][l]=array[l+j];
		}
	}
	for(j=0;j<len-k+1;j++){
		int max=array1[j][0];
		maxi[j]=max;
		for(l=0;l<k;l++){
			if(array1[j][l]>max){
				max=array1[j][l];
				maxi[j]=max;
			}
		}
	}
	int m,n;
	for(m=0;m<len-k+1;m++){
		printf("\n%d = max (",maxi[m]);
		for(n=0;n<k;n++){
			printf("%d",array1[m][n]);
			if(n<k-1){
				printf(",");
			}
		}
		printf(")");
	}
	
	return 0;
}
