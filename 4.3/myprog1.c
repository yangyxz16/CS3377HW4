#include<stdio.h>
#include<fcntl.h>
#include<errno.h>

main(int argc, char**argv) {
	int fd;
	
	fd = mkdir("dir1", O_CREAT | S_IRUSR | S_IWUSR | S_IXUSR);
	printf("%d\n", fd);
	if(fd == -1) {
		fprintf(stderr, "Error Number %/d\n", errno);
		perror("Program");
		}
	
	fd = open("dir1/file10", O_RDONLY | O_CREAT);
	printf("%d\n", fd);
	if(fd == -1) {
		fprintf(stderr, "Error Number %/d\n", errno);
		perror("Program");
		}
	
	fd = mkdir("dir2", O_CREAT | S_IRUSR | S_IWUSR | S_IXUSR);
	printf("%d\n", fd);
	if(fd == -1) {
		fprintf(stderr, "Error Number %/d\n", errno);
		perror("Program");
	}

	fd = open("dir2/file20", O_RDONLY | O_CREAT);
	printf("%d\n", fd);
     	if(fd == -1) {
		fprintf(stderr, "Error Number %/d\n", errno);
		perror("Program");
	}

	fd = open("file1", O_RDONLY | O_CREAT);
	printf("%d\n", fd);
	 if(fd == -1) {
    	       fprintf(stderr, "Error Number %/d\n", errno);	
	       perror("Program");
	 }

	fd = symlink("dir2/file20", "link1");
	printf("%d\n", fd);
	 if(fd == -1) {
         	 fprintf(stderr, "Error Number %/d\n", errno);	
		 perror("Program");
		 }

}

