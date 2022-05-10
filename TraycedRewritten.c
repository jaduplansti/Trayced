#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>
#include <stdint.h>
//Variables//
FILE *fp;
unsigned char buffer[16];
int n,x,t,a,c;
//Colors//
void red () {
  printf("\033[1;31m");
}
void yellow() {
  printf("\033[1;33m");
}
void green() {
  printf("\033[1;32m");
}
int main(int argc, char *argv[]) //This is Main//
{
  if(argc < 2)
  {
    printf("Missing Arguements\n");
    exit(1);
  }
 
  disas(argv[1]); //Dump Hex Values//
}


int disas(char *file[]) //This Is Where The Dumping Loop Begins//
{
   fp = fopen(file,"rb");
  if(fp == NULL) //err checking//
  {
    fprintf(stderr,"The File %s Cant Be Dumped!\n",file);
    exit(1);
  }

 fseek(fp,0,SEEK_SET); //Seeks At The First Byte//
 while(!feof(fp))
 {
  
   x = fread(buffer,sizeof(unsigned char),16,fp); //Reads 16 byte//
for( n=0; n<x; n++ )
{
  if(x == 0)
{
break;
}
 if(c == 0)
 {
   printf("|");
   c++;
 }
 
if(x == 16) //Just Some Colors//
{
  if(t == 1)
  {
    yellow();
  }
  if(t == 2)
  { 
    red();
  }
  if(t == 3)
  { 
    green();
    t = 0;
  }
  
  t++;
  a++;
  printf(" ");
  if(a == 10)
  {
    printf("|");
    c = 0;
    printf("\n");
    a = 0;
  }
}

printf("%02X",buffer[n]);

}
}
printf("\n");
}
