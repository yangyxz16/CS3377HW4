# CS3377HW4

Exercise 4.1: Bash shell scripts to create directories and files
A shell script (script1.sh) to create a few directories as shown below in your current directory (dir1, dir2), a few files (file1 in current directory, file10 in dir1, file20 in dir2, and a symbolic link, link1 (to link to file20).
Create the files and directories in depth-first order (and left to right). That is, dir1 will be created first, then file10, and so on. You should create link1 (a softlink to file20) after file20 is created.

Exercise 4.2: Bash shell scripts to clean up directories and files from 4.1
A shell script (script2.sh), listing all the files and directories created in 4.1, 
(1) to output a shell file (script3.sh) which will delete all the files and directories when it
is run 
(2) to run this output script (script3.sh) to delete all the files and directories
(3) to show all the deletion done (by listing all the files and directories after the deletion - by showing that there is no files
and directories).

Exercise 4.3: C/C++ to repeat file / dir creations using system() calls.
A C/C++ program (myprog1.c or myprog1.cpp, and a makefile to create executable named
myprog1) to create a few directories as shown below in your current directory (dir1, dir2), a few files
(file1 in current directory, file10 in dir1, file20 in dir2, and a symbolic-link link1 (to link to file20).
Create the files and directories in depth-first order (and left to right). That is, dir1 will be
created first, then file10, and so on. You should create link1 (a softlink to file20) after file20 is created.

Exercise 4.4: C/C++ to repeat file / dir creations using function calls.
A C/C++ program to create a few directories as shown below in your current directory (dir1, dir2), a
few files (file1 in current directory, file10 in dir1, file20 in dir2, and a symbolic-link link1 (to link to
file20).
