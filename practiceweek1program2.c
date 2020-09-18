#include<stdio.h>
float sumaver(int , int);
void printeven(int ,int);
int main()
{
	int no1,no2,no3,a,b;
  float avg;
	printf("Enter three numbers:");
	scanf("%d %d %d",&no1,&no2,&no3);
  if(no1<no2&&no1<no3){
    a=no2;b=no3;
  }
  else if(no2<no3&&no2<no1)
    {
      a=no1;b=no3;
    }
  else{
    a=no1;b=no2;
  }
  if(a<=b){
  no1=a;no2= b;
  printf("%d %d\n",no1,no2);
}
  else{
  no1=b;no2 = a;
    printf("%d %d\n",no1,no2);
}
  avg=sumaver(no1,no2);
  printf("Average of %d ,%d is = %d\n",a,b,avg);
  printeven(no1,no2);
}
float sumaver(int a,int b){
  int sum =a+b;
  float avg = sum/2;
  printf("Sum of %d + %d = %d\n",a,b,sum);
  return avg;
}
void printeven(int a,int b){
  int i=0;
  printf(" All Even Numbers in between %d , %d:\n ",a,b);

  for(i=a;i<=b;i++){
     if(i%2==0)
     printf("%d\n",i);
   }
}
