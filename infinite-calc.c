#include<stdio.h>

void calc()
{
	int n,n1,n2;
	do
	{
		printf("\nenter your choice :-");
		scanf("%d",&n);
		if(n==6)
		{
			printf("exit....");
		}
		if(n>6)
		{
			printf("enter valid value....");
		}
		if(n<6)
		{
			printf("enter first number :=");
			scanf("%d",&n1);
			
			printf("enter second number :=");
			scanf("%d",&n2);
		}
		switch(n)
		{
			case 1 :
				printf("%d + %d = %d",n1,n2,n1+n2);
				break;
				
			case 2 :
				printf("%d - %d = %d",n1,n2,n1-n2);
				break;
				
			case 3 :
				printf("%d * %d = %d",n1,n2,n1*n2);
				break;
				
			case 4 :
				printf("%d / %d = %d",n1,n2,n1/n2);
				break;
				
				
			case 5 :
				printf("%d % %d = %d",n1,n2,n1%n2);
				break;
		
	    }
	}while(n<6);

}
				
main()

{								
				
	printf("\n 1 addition\n");
	printf("\n 2 substraction\n");
	printf("\n 3 multiplication\n");
	printf("\n 4 division\n");
	printf("\n 5 module\n");
	printf("\n 6 exit\n");
	
	calc();
	
}