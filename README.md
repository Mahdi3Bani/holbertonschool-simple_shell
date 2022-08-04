![A_simple_shell](https://user-images.githubusercontent.com/97880395/181494936-0350fdd2-4b38-4847-b3a5-c18d8bf9eda8.png)

## Description :ok_hand:
This is simply a recreation of a shell that takes user inputs (commands with arguements) and output accourntly 
Basic loop of a shell : 
1. Print input
2. Read a line from a standa input (solution)
3. Turn the command lines string into an executable program 
4. Execute

## Files contents :card_index_dividers:

| files | content |
| ------ | ------ |
| Authors | List of contributors to this project |
| Readme | The README file |
| Shell.h | The header file |
| main.c | File that contain the main code |
| execute.c | File contain the execute functions|
| path.c | File that contain the path functions|
| split.c | File that contain the split functions |
| _realloc.c | Function containing realloc |
| getenv.c | Function contain env functions |
| functions.c | Function that contain builtins |


## Simple Shell :shell:

- the prompt is displayed each time a command has been executed
- This program displays a prompt and wait for user type a command
- When the user type EXIT, shell will end and exit the interface
- The program print the current environement when user type ENV
- The program execute the most commun shell commands such as 
    + LS
    + PWD
    + CD
    + EXIT
    + ENV
    + History ... with arguments
- The program quit when the user enter **CTRL + C**
- The user could stop the program using **CTRL  + D**
#### List of functions and system calls we could use
List of allowed functions and system calls in this project : 
```
access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
fork (man 2 fork)
free (man 3 free)
fstat (man 2 fstat)
getcwd (man 3 getcwd)
getline (man 3 getline)
kill (man 2 kill)
lstat (man 2 lstat)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (man 2 stat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)
_exit (man 2 _exit)
```
#### Process description :man_technologist:

How the shell actually works : 
A parents process is one that creates a child process using a fork () system call.
On the success of a fork() system call, the pid of the child process is returned to the parent process and 0 is returned to the child process. on the failure to the parent process a child process is not created.

#### Flowchart of simple shell :computer:
![68747470733a2f2f692e696d6775722e636f6d2f6e53516161516a2e6a7067](https://user-images.githubusercontent.com/97880395/182931094-367503c5-4677-4053-a640-2f5b13ec3c80.jpeg)

## License :busts_in_silhouette:
Authors :
- Mahdi Bani < 5035@holbertonschool.com >
- Mohamed Ali Krifa < 4997@holbertonschool.com >
- Imen Mansouri < imen.mansouri@holberthonstudents.com >

**This project was made as part of the curriculum in HOLBERTON SCHOOL**
![holberton-logo](https://user-images.githubusercontent.com/97880395/181658846-6e76edce-7d56-4abe-8c62-228479bde436.png)
