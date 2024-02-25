#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main (void)
{
    int pid = fork();
    // int fd[2];

    int fd = open("file1.txt", O_RDWR | O_CREAT, 0777);
    dup2(fd, STDOUT_FILENO);

    printf("hello world\n");
    
}