#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max(int a,int b)
{
	if(a>=b)
		return a;
	else
		return b;
}
void lcs(char *x,char *y,int m,int n)
{
	int arr[n+1][m+1];int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(i==0||j==0)
				arr[i][j]=0;
			else if(x[j-1]==y[i-1])
				arr[i][j]=arr[i-1][j-1]+1;
			else
				arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
		}
	}
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
			
	printf("Length of the lcs is:%d\n",arr[n][m]);
	int ind=arr[n][m];
	char lcs[ind+1];
	lcs[ind]='\0';
	i=n;j=m;
	while(i>0&&j>0)
	{
		if(x[j-1]==y[i-1])
		{	lcs[ind-1]=x[j-1];
			i--;j--;ind--;
		}
		else if(arr[i-1][j]>arr[i][j-1])
			i--;
		else 
			j--;
	}
	printf("LCS:%s\n",lcs);
}
int main()
{
	char *x,*y;
	x=(char *)malloc(10*sizeof(char));
	y=(char *)malloc(10*sizeof(char));
	printf("Enter the strings:");
	gets(x);gets(y);
	lcs(x,y,strlen(x),strlen(y));
	return 0;
}
			
			 
