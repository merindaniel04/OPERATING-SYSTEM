#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{
   pid_t childpid=fork();
   
   if(childpid==0)
   {
     printf("Child process is created sucessfully\n");
     printf("Parent id=%d\n",getppid());
     printf("Child id=%d\n",getpid());
   }
   if(childpid>0)
   {
      printf("\nCurrently in the parent process and child process is created");
      printf("\nParent id=%d\n",getpid());
      printf("Child id=%d\n",childpid);
      wait(NULL);
      printf("The child process is terminated and the parent process is changed from its waiting stage to running stage\n");
   }
   if(childpid<0)
   {
   printf("\nThe child process is not created\n");
   }
   exit(0);
 }
