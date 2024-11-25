#include <stdio.h>
#include <math.h>

int Armstrongnumber(int x);
int numberOfDigits(int y);


int main(void)
{
	int num;
	int result;
	
	printf("Enter a number:\n");
	scanf("%d",&num);
	
	printf("The number is %d\n",num);
	
	result=Armstrongnumber(num);
	
	printf("The result is %d\n",result);
	
	return 0;
}

int numberOfDigits(int y)
{
	int count=0;
	
	do
	{
		y=y/10;
		++count;
	}while(y!=0);
	
	//printf("The number of digits are %d\n",count);
}

int Armstrongnumber(int x)
{
	int rem;
	int sum=0;
	int result2;
    int originalnum=x;
     
	result2=numberOfDigits(originalnum);
	
	while(x)
	{
		rem=x%10;
		sum=sum+pow(rem,result2);
		x=x/10;
	}
	
	printf("sum is %d\n",sum);
	
	
	
	if(sum == originalnum)
	{
		printf("The number %d is an Armstrong number\n",originalnum);
		return 1;
	}
	else 
	{
		printf("The number %d is not an Armstrong number\n",originalnum);
		return 0;
	}
}
