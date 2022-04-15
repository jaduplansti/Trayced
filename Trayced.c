#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <Zydis/Zydis.h>
char Name[15];
 int main(int agrc, char agrv) 
{
 RequestName(1);      

 return 0;
}

 RequestName()
{

	printf("\n Trayced:");
	sleep(3);
	printf("\n Enter The Name Of The File You Want To Analyze:");
      scanf("%s",&Name);
       
      if(strlen(Name)>=15)    
{
     	      printf("The Name Exceeded 15 Characters Try Again");
                RequestName();
}
		else
	     printf("The Name Has Been Saved. All Functions Will Now Refer To %s",Name);

	      }             
Options()
{
	Printf(
