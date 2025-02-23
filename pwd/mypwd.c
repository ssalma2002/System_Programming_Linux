#include <stdio.h>
#include <unistd.h>
#define SIZE 100
#include <stdlib.h>
int main(){
	char buf[SIZE];
	if(getcwd(buf,sizeof(buf))!=NULL){
		printf("%s \n",buf);		
	}else{
		printf("Error in getting the path \n");
		exit(-1);
	}
	return 0;
}
