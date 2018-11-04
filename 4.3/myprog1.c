
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	system("mkdir dir1");
	system("touch dir1/file10");
	system("mkdir dir2");
	system("touch dir2/file20");
	system("touch file1");
	system("");
	//char command[50];
	//strcpy(command, "ls -l" );
        //system(command);  
	return(0);
	} 
