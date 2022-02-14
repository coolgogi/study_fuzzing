#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]){
	
	char * ch ;
	ch = (char *) malloc (sizeof(char) * 10);
	// printf("good\n");
	strcpy(ch,argv[1]);
	if(ch[0] == 'a'){
		free(ch);
		while(1){}

	}else{
		printf("hello world\n");

	}

	free(ch);
	return 0;
}
