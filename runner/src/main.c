#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "runner.c"

int main(int argc, char *argv[]){

	runner("exec", "bbc");
	// runner("exec", "");
	// runner("exec", "abc");
	
	
}
