/*
 * File: 102-zombie.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * infinite_while - Run an infinite while loop.
 *
 * Return: Always 0.
 */
int infinite_while(void)
{
	while (1)
[2;2R[>77;30602;0c]10;rgb:bfbf/bfbf/bfbf]11;rgb:0000/0000/0000	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Creates five zombie processes.
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t pid;
	char count = 0;

	while (count < 5)
	{
		pid = fork();
		if (pid > 0)
		{
			printf("Zombie process created, PID: %d\n", pid);
			sleep(1);
			count++;
		}
		else
			exit(0);
	}

	infinite_while();

	return (EXIT_SUCCESS);
}

