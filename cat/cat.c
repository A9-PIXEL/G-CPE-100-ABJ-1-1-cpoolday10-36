/*
** EPITECH PROJECT, 2026
** cat
** File description:
** cat program
*/

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUF_SIZE 30000

int my_cat_fd(int fd)
{
    char buffer[BUF_SIZE];
    ssize_t r;

    while ((r = read(fd, buffer, BUF_SIZE)) > 0) {
        if (write(1, buffer, r)!= r)
            return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    int i = 1;
    int fd;
    int ret = 0;

    if (ac == 1) {
        my_cat_fd(0);
        return (0);
    }
    while (i < ac) {
        fd = open(av[i], O_RDONLY);
        if (fd == -1) {
            write(2, "cat: ", 5);
            write(2, av[i], strlen(av[i]));
            write(2, ": ", 2);
            write(2, strerror(errno), strlen(strerror(errno)));
            write(2, "\n", 1);
            ret = 1;
        } else {
            my_cat_fd(fd);
            close(fd);
        }
        i++;
    }
    return (ret);
}
