#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>


void main()
{
 char *path,path1[10];
 struct stat *nfile;
 nfile=(struct stat*)malloc(sizeof(struct stat));
 printf("Enter the file name\n");
 scanf("%s",path1);
 stat(path1,nfile);
 printf("User id=%d\n",nfile->st_uid);
 printf("Block size=%ld\n",nfile->st_blksize);
 printf("Last accessed time=%ld\n",nfile->st_atime);
 printf("last modification time=%ld\n",nfile->st_mtime);
 printf("production mode=%d\n",nfile->st_mode);
 printf("size of file=%ld\n",nfile->st_size);
 printf("Number of links=%ld\n",nfile->st_nlink);
 
 }
