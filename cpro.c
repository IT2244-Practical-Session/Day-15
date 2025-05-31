//01
#include<stdio.h>
#include<unistd.h>
int main(){
	fork();
	fork();
	fork();
	printf("Hello World!\n");
	
	return 0;
}
[2021ict10@fedora ~]$ vi ex1.c
[2021ict10@fedora ~]$  gcc ex1.c -o ex1
[2021ict10@fedora ~]$ ./ex1
Hello World!
Hello World!
Hello World!
Hello World!
Hello World!
Hello World!
Hello World!
Hello World!

//02
#include<stdio.h>
#include<unistd.h>
int main()
{
	int f=fork();
	if(f==0)
	{
		printf("Child Process\n");
	}
	else 
	{
		printf("Parent Process\n");
	}
	return 0;
}
[2021ict10@fedora ~]$  vi ex2.c
[2021ict10@fedora ~]$ gcc ex2.c -o ex2
[2021ict10@fedora ~]$ ./ex2
Parent Process
Child Process

//03
//print numbers from 1 to 10
//1 to 5 should be print by child process
//from 6 to 10 should be parent process
//calculate summation of those numbers

#include<stdio.h>
#include<unistd.h>
int main()
{
	int f=fork();
	int sum1 =0;
	int sum2=0;
	
	if(f==0)
	{
		
		for(int i=1;i<=5;i++)
		{
			printf("%d \n",i);
			sum1=sum1+i;
		}
		printf("Summation of child:%d\n",sum1);
	}
	
	else
	{
		for (int j=6;j<=10;j++)
		{
			printf("%d \n",j);
			sum2=sum2+j;
			
		}
		printf("Summation of parent:%d\n",sum2);
		
	}
	
	//int sum=sum1+sum2;
	//printf("Total Summation:%d\n",sum);
	
	return 0;
}
[2021ict10@fedora ~]$ vi ex3.c
[2021ict10@fedora ~]$ gcc ex3.c -o ex3
[2021ict10@fedora ~]$ ./ex3
6
7
8
9
10
Summation of parent:40
1
2
3
4
5
Summation of child:15
#include<stdio.h>
#include<unistd.h>
int main()
{
	int id=fork();
	int n;
	
	if(id==0)
	{
		n=1;
	}
	
	else
	{
	    n=6;
	}
	
	for(int i=n;i<n+5;i++)
	{
		printf("%d",i);
	}
	printf("\n");
	
	return 0;
}
