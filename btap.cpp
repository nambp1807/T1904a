#include<stdio.h>

	int main(){
			int arr[10];
			for(int i=0;i<10;i++)
			{
				printf("nhap mot so : \n");
				scanf("%d",&arr[i]);
				
			}
		int max= arr[0];
		int min = arr[0];
		
		for(int i =0;i<10;i++){
			if(arr[i]>max){
				max =  arr[i];}
			}
		for(int i =0;i<10;i++){
			if(arr[i]<min){
				min =  arr[i];
			}
			
		}
		printf(" so lon nhat : %d\n",max);
		printf(" so nho nhat : %d\n",min);
		
		return 0;
		
	}
