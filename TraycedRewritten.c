#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>
#include <stdint.h>
FILE *fp;
unsigned char buffer[16];
int n;
int main()
{
 
}
int disas(char *FILE)
{
  fp = fopen(FILE,"rb");
  while(!feof(fp))
  {

   fread(buffer,sizeof(unsigned char),16,fp);
     for(n =0;n<100;n++)
     {
         printf("%04X",n);
         printf("     ");
   printf("%02X",buffer);
     }
}
}