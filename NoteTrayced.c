#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char Text[200];
	int r;
	FILE *fp; 

	printf("Note Editor is Initializing\n");
	sleep (5);
	
         
     fp = fopen(argv[1], "r");
         printf("%s Has Been Created or Opened\n",argv[1]);
 
	r = fread(Text,sizeof(Text),1,fp);
	printf("%s",Text);
	fclose(fp);
	return 0;
}

   


	

