#include <stdio.h>

int main()
{
	int i,j,m,p,n=9;
	printf("Enter the number of words:");
	scanf("%d",&m);
	int mat[m][n],count1,flag[m],mum;
	printf("Enter the data to create parity bit in 8 bit format\n");
	for(i=0;i<m;i++)
	{
		printf("Word Number %d\n",i+1);
		count1=0;
		for(j=0;j<n-1;j++)
		{
			scanf("%d",&mat[i][j]);
			if(mat[i][j]==1)
				count1++;
		}
		if(count1%2==0){
			mat[i][n-1]=0;}
		if(count1%2==1){
			mat[i][n-1]=1;}
	}
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		printf("%d",mat[i][j]);
	}
	printf("\n");
	}
	printf("Do you want to  check parity:(0-yes,1-no)\n");
	scanf("%d",&mum);
	if(mum==0){
	for(i=0;i<m;i++)
	{
		printf("Word number %d\n",i+1);
		count1=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
			if(mat[i][j]==1)
				count1++;
		}
		if(count1%2==0){
			flag[i]=0;}
		else{
			flag[i]=1;}
	}
	printf("0.Even Parity bit\n1.Odd Parity bit\n");
	scanf("Enter choice:%d",&p);
	count1=0;
	for(i=0;i<m;i++)
	{
		if(flag[i]!=p)
		{
			printf("Data is corrupted!!\n");
			break;
		}
		else{
			count1++;}
	}
	if(count1==m)
		printf("Data is Accepted\n");
	}
	return 0;
}
