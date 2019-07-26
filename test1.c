#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>



int main(int argc, char* argv[]){
	if(argc > 1){
		int fd = open(argv[1], O_RDONLY); // O_CREAT

		if(fd == -1){
			printf("Failed to open file : %s\n", argv[1]);
			printf("Usage : %s <filename> \n", argv[0]);
		}
		else{
			printf("Sucess to open file : %s\n", argv[1]);
			close(fd);
		}
	}
	else{
		printf("Usage : %s <filename> \n", argv[0]);
	}
}
