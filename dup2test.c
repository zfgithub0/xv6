#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int main(int argc, char *argv[])  
{  
    int fd1=open("README", O_RDONLY);  
    printf(1,"fd1=%d\n", fd1);  
    int fd2=10;  
    int fd3=dup2(fd1, fd2);  
    printf(1,"fd1=%d fd2=%d fd3=%d\n", fd1, fd2, fd3);  
  
    return 0;  
}  
