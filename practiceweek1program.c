#include<stdio.h>
int main()
{
	int no1,no2,result,choice;
	printf("Enter two numbers:");
	scanf("%d %d",&no1,&no2);
  do{
	printf("1.Add\t2.Subtract\t3.Multiply\t4.Divide\t5.Modulus\t");
  printf("6.less than\t7.NotEqual\t8.Greater than \t9.Greater than or equal to\t");
  printf("10.Less than or equal to\t11.Exit \tEnter your choice:  ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: result=no1+no2;
			printf("Sum= %d\n",result);
			break;
		case 2: result=no1-no2;
			printf("Difference= %d\n",result);
			break;
		case 3:	result=no1*no2;
			printf("Product= %d\n",result);
			break;
		case 4: result=no1/no2;
			printf("Quotient= %d\n",result);
			break;
		case 5:result=no1%no2;
			printf("Remainder= %d\n",result);
			break;
      case 6:if(no1<no2)
      printf("Number1 is less than Number2\n");
      else
      printf("false\n");
      break;
      case 7:if(no2!=no1)
      printf("Number1 is Not Equal to number2\n");
      else
      printf("false\n");break;
      case 8:if(no1>no2)
      printf("Number1 is greater than Number2 \n");
      else
      printf("false\n");break;
      case 9:if(no1>=no2)
      printf("Number1 is gerater than or equal to Number2\n");
      else
      printf("false\n");break;
      case 10:if(no1<=no2)
      printf("Number1 is less than or equal to Number2\n");
      else
      printf("false\n");break;
      case 11:break;
		default:printf("Invalid choice");
	}
  if(choice == 11)
  printf("\n Your Exiting the Programe\n");
}while(choice!=11);
}
