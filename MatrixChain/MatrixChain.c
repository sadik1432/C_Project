#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

/*
4
5 4
4 6
6 2
2 7

5
4 10
10 3
3 12
12 20
20 7

*/
void printb(int ,int ,int*,int ,char*);
void operation(int*,int*,int*,int);
void display(int*,int);
int main()
{
	int*a,i,j,*m,n,k,l,*s,val;
	printf("\nEnter the number of matrices:- ");
	scanf("%d",&n);
	n++;
	a=(int*)malloc(n*sizeof(int));
	for(k=1;k<n;k++)
	{
		scanf("%d %d",&i,&j);
		*(a+k-1)=i;
		*(a+k)=j;
	}
	
	m=(int*)malloc(n*n*sizeof(int));
	s=(int*)calloc(n*n,sizeof(int));

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			*(m+i*n+j)=INT_MAX;
	}

	for(i=0;i<n;i++)
	{
		*(m+i*n+i)=0;	
	}
	operation(m,s,a,n);

	return 0;
}
void operation(int*m,int*s,int*a,int n)
{
	int l,i,j,val,k;
	char ch='A';
	for(l=2;l<n;l++)
	{
		for(i=1;i<n-(l-1);i++)
		{
			j=i+(l-1); //l=3 i=1 j=3
			for(k=i;k<j;k++)
			{
				val=*(m+i*n+k)+*(m+(k+1)*n+j)+( *(a+(i-1))*( *(a+k) )*( *(a+j) )  );
				if( *(m+i*n+j) > val )
				{
					*(m+i*n+j) = val;
					*(s+i*n+j)=k;
				}
			}
			
		}
	}
	printf("\nThe final dp matrix is:\n");
	display(m,n);
	printf("\nThe final parenthesization matrix is:\n");
	display(s,n);
	printf("\nThe required parenthesis:\n");
	printb(1,n-1,s,n,&ch);
}
void display(int*m,int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(*(m+i*n+j)!=INT_MAX && *(m+i*n+j)!=0)
				printf("%d\t",*(m+i*n+j));
			else
				printf("-\t");
		}
		printf("\n");
	}
}

void printb(int i,int j,int *s,int n,char *c)
{
	if(i==j)
	{
		printf("%c",*c);
		(*c)++;
	}
	if(*(s+i*n+j)>0)
	{
		printf("(");
	printb(i,*(s+i*n+j),s,n,c);
	printb(*(s+i*n+j)+1,j,s,n,c);
	printf(")");
	}
	
}