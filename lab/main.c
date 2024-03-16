#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main (void)
{
    int pipe_fd[2];

    pipe(pipe_fd);

    dup2(STDOUT_FILENO, pipe_fd[0]);
    dup2(pipe_fd[0], STDOUT_FILENO);

    printf("hello world\n");
}