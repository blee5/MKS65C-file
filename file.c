#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char buf[50];
    char *msg = "hello world";

    int f = open("test", O_RDWR);

    printf("Bytes written: %ld\n", write(f, msg, 12));
    lseek(f, 0, SEEK_SET);

    printf("Bytes read: %ld\n", read(f, buf, 15));
    printf("%s\n", buf);

    close(f);

    return 0;
}
