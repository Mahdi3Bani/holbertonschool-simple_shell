#include "shell.h"
/**
 * main - a simple shell (gates of s"hell" r open)
 * @argc: Argument Count
 * @argv:Argument Value
 * Return: idk yet
 */
int main(int argc, char **argv)
{

char *cmd;

while (1)
{
    print_1();
    cmd = read_cmd();

    if (!cmd)
    {
        exit(EXIT_SUCCESS);
    }
    if (cmd [0] == '\0' || strcmp(cmd, "\n") == 0)
    {
        free(cmd);
        continue;
    }
     if(strcmp(cmd, "exit\n") == 0)
        {
            free(cmd);
            break;
        }
        printf("%s\n", cmd);
        free(cmd);
}

    exit(EXIT_SUCCESS);

}
