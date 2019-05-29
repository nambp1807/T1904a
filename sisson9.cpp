#include<stdio.h>

 
void nhap_ma_tran(int a[4][4],int n=4)
{
	int i,j;
    for ( i=0; i<n; i++)
        for ( j=0; j<n; j++)
        {
            printf("\nNhap a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
}
 
void in_ma_tran(int a[4][4],int n=4)
{
	int i,j;
    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}
void nhap_ma_tran2(int b[4][4],int n=4)
{
	int i,j;
    for ( i=0; i<n; i++)
        for ( j=0; j<n; j++)
        {
            printf("\nNhap b[%d][%d]: ",i,j);
            scanf("%d", &b[i][j]);
        }
}
 
void in_ma_tran2(int b[4][4],int n=4)
{
	int i,j;
    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
}
int main()
{
	int n=4;
    int a[4][4];
    printf("nhap ma tran 1 :\n");
    nhap_ma_tran(a,n);
    printf("ma tran vua nhap : \n");
    in_ma_tran(a,n);
    printf("nhap vao ma tran 2 \n:");
    nhap_ma_tran2(b,n);
    
    return 0;
}
