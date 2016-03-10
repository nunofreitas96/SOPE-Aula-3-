#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void){

pid_t pid, pidb;


pid = fork();


if(pid > 0){		//Processo pai
	wait(NULL);
	printf("friends!\n");
	return 0;

	
}
else{
	pidb = fork();
	if(pidb > 0){ //Processo Filho
	wait(NULL);
	printf("my ");
	return 0;}
	else{ //Processo Neto
	printf ("Hello ");
return 0;

}

}


}
