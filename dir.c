#include<dirent.h>
#include<unistd.h>
#include<stdio.h>

void main()
{
  DIR*d;
  struct dirent *de;
  d=opendir(".");
  while(de=readdir(d))
  printf("%s\n",de->d_name);
  
  closedir(d);
 }
