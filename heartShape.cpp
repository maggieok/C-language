#include <stdio.h>
main()
{
	int l,m,i,j,n,numj,num,a;
	printf("ÇëÊäÈëµ×±ß³¤\n");
	scanf("%d",&l);
	m=l/2;
	if(m%2==0)
	{
		i=m;
	} 
	else
	{
		i=m+1; 
	}
	for(j=i/2-1;j>=0;j--)
	{		
		for(numj=j;numj>0;numj--)
		{ 
			printf("  ");
		}
		for(n=(i-1-(2*j));n>0;n--)
		{
			printf("* ");
		}
		for(numj=j;numj>0;numj--)
		{ 
			printf("  ");
		}

			if(j!=0)
			{
				printf("  ");
			}
			else
			{
				printf("* ");
			}
		for(numj=j;numj>0;numj--)
		{ 
			printf("  ");
		}
		for(n=(i-1-(2*j));n>0;n--)
		{
			printf("* ");
		}
		for(numj=j;numj>0;numj--)
		{ 
			printf("  ");
		}	
			
		printf("\n");
	} 
		 if(m%2==0)
		 {
		 	a=l;
		 }
		 else
		 {
		 	a=l+2;
		 }
		 if(a%2==0)
		 {
		 a=a-1;
		 }
	 	 for(j=0;j<=a/2-1;j++)
		{
				for(numj=j;numj>0;numj--)
				{ 
					printf("  ");
				}
				for(n=a-1-(2*j);n>0;n--)
				{
					printf("* ");
				}
				for(numj=j;numj>0;numj--)
				{ 
					printf("  ");
				}
				printf("\n");
			
		}

		
} 
