#include<stdlib.h>
#include<stdio.h>
int main()
{
	long tpservice,tpreplace,tmaccess,teaccess;
	float pservice,pmodifietime;
	double p;
	printf("enter time of page service ");
	scanf("%ld",&tpservice);
	 tpservice=tpservice*1000000;
	printf("enter time of page replace ");
	scanf("%ld",&tpreplace);
	 tpreplace=tpreplace*1000;
	printf("enter time to pagemodifie");
	scanf("%f",& pmodifietime);
	 pmodifietime=pmodifietime/100;
	//tpservice=8000000;
	//tpreplace=20000000;
	//pmodifietime=0.7;
	pservice=1-pmodifietime;
	printf("pservice value is%f\n\t",pservice);
	printf("enter time of memory access \n ");
	scanf("%ld",&tmaccess);
	printf(" enter  value to teaccess" );
	scanf("%ld",&teaccess);
	//tmaccess=100;
	//teaccess=200;
	if(tmaccess<teaccess)
	{
	p=(teaccess-tmaccess)/(tpservice*pservice+tpreplace*pmodifietime-tmaccess);
	printf("Page Fault Rate: %lf \n",p*100);
	}
	else
	 {
	 	
	 
	
		printf("page fault access time is more than %ld",teaccess);
     }
    getch(); 
     return 1;
	
 	

}

