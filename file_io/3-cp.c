#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Array of argument strings
 * Return: 0 on success, exits with specific codes on error
 */
int main(int ac, char *av[])
{
    int fd_from, fd_to;
    ssize_t rd_stat, wr_stat;
    char buffer[1024];
    mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;

    if (ac != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(av[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }

    fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
        close(fd_from);
        exit(99);
    }

    while ((rd_stat = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        ssize_t total_written = 0;

        while (total_written < rd_stat)
        {
            wr_stat = write(fd_to, buffer + total_written, rd_stat - total_written);
            if (wr_stat == -1)
            {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
                close(fd_from);
                close(fd_to);
                exit(99);
            }
            total_written += wr_stat;
        }
    }

    if (rd_stat == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        close(fd_from);
        close(fd_to);
        exit(98);
    }

    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        close(fd_to);
        exit(100);
    }

    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return (0);
}
