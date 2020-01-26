#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
 long fact;
 int choice,number,dividend,divisor,ans,m,n,first,second,position;
 long factorial(long);
 int gcd(int,int);
 int fibonaci(int,int,int);
 int ackemann(int,int);
 void toh(int,char,char,char);
 while(1)
 {
  clrscr();
  printf("Menu \n 1. Factorial \n 2. GCD \n 3. Fibonaci \n 4. Ackman \n 5. Tower of hanoi \n 6. Exit");
  printf("\nEnter you choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
	printf("Enter the number you want to factorial : ");
	scanf("%d",&number);
	fact=factorial(number);
	printf("Factorial : %ld",fact);
	break;
   case 2:
	printf("Enter the dividend : ");
	scanf("%d",&dividend);
	printf("Enter the divisor : ");
	scanf("%d",&divisor);
	ans=gcd(divisor,dividend);
	printf("GCD : %d",ans);
	break;
   case 3:
	printf("Enter the first number : ");
	scanf("%d",&first);
	printf("Enter the second number : ");
	scanf("%d",&second);
	printf("Which position number you want : ");
	scanf("%d",&position);
	ans=fibonaci(first,second,position);
	printf("%d is the %d position",ans,position);
	break;
   case 4:
	printf("Enter the value of m : ");
	scanf("%d",&m);
	printf("Enter the value of n : ");
	scanf("%d",&n);
	ans=ackemann(m,n);
	printf("Ackemann : %d",ans);
	break;
   case 5:
	printf("Enter the no. of disc : ");
	scanf("%d",&n);
	toh(n,'A','B','C');
   case 6:
	exit(0);
   default:
	printf("Error");
  }
  getch();
 }
}
long factorial(long number)
{
 if(number==0)
 return 1;
 else
 return number*factorial(number-1);
}
int gcd(int divisor,int dividend)
{
 if(divisor==0)
 return dividend;
 else
 return gcd(dividend%divisor,divisor);
}
int ackemann(int m,int n)
{
 if(m==0)
 return n+1;
 if(m>0&&n==0)
 return ackemann(m-1,1);
 if(m>0&&n>0)
 return ackemann(m-1,ackemann(m,n-1));
}
int fibonaci(int first,int second,int position)
{
 if(position==1)
 return first;
 if(position==2)
 return second;
 if(position>2)
 return fibonaci(first,second,position-1)+fibonaci(first,second,position-2);
}
void toh(int n,char a,char b,char c)
{
 if(n==1)
 printf("move %c to %c\n",a,b);
 else
 {
  toh(n-1,a,c,b);
  printf("move %c to %c\n",a,b);
  toh(n-1,c,b,a);
 }
}