#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void){

pid_t pid;
pid = fork();
	if(pid ==0){
	printf("Hello ");
	return 0;
 
}
if(pid > 0){
wait(NULL);
printf("world !\n");
return 0;

}
}
