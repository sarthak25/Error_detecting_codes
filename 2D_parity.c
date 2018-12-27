#include<stdio.h>
int main()
{

	char x[10][20];
	int i,j;
	int count;
	for(i=0;i<4;i++)
	{
		printf("enter the frame %d:",i);
		scanf("%s",x[i]);
	}
	for(i=0;i<4;i++)
	{
		count=0;
		for(j=0;x[i][j]!='\0';j++)
		{
			if(x[i][j]=='1')
			{
				count++;
			}
		}
		    if(count%2==0)
		    {
			    x[i][j]='0';
		    }
		    else
		    {
			    x[i][j]='0';
		    }
		    j++;
		    x[i][j]='\0';
	}
	    for(j=0;j<=7;j++)
	    {
		count=0;
		for(i=0;i<4;i++)
		{
			if(x[i][j]=='1')
			{
				count++;
				}
			}
			if(count%2==0)
			{
				x[i][j]='0';
			}
			else
			{
				x[i][j]='1';
			}
		}
		x[i][j]='\0';
		for(i=0;i<=4;i++)
		{
			printf("\n%s",x[i]);
		}
		getch();

}
