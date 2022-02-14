#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>

int runner(char * exec, char * input){

	pid_t child_pid ;
	int exit_code;

	child_pid = fork();
	if(child_pid == 0){

		// FILE *fp = freopen("stdout.txt","r", stdout);
		// int rt = execl("./test/exec", "abc", (char *) NULL);
		// int rt = execl("./test/exec", 0);
		int rt = execl("~/Documents/Master/study_fuzzing/runner/test", "exec", "bbc");
		if(rt == -1){
			// fclose(fp);
			// FILE *f_err = freopen("./output/stderr.txt", "r", stdout);
			perror("Error in runner");
			// fclose(f_err);
			return -1;
		}
	}else{
		// count 100 secs
		// finish
		wait(0);
		printf("parent\n");
	}
	wait(&exit_code);
	exit(0);
}
