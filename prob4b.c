#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void){

pid_t pid, father;

father = getpid();
pid = fork();
	if(pid ==0){
while(getpid() == father);

	printf(" world! \n");
	return 0;
 
}
if(pid > 0){

printf("Hello ");


}
}
