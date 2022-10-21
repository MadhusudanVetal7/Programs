#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

// Read : 4
// Write : 2
// Execute : 1

// Permission   0_Owner_group_Other
int main()
{
    char Fname[20];
    char Data[100];
    int fd = 0;
    int iRet = 0;

    printf("Enter file name to Open \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    printf("File is successfully Open with FD %d\n",fd);

    iRet = read(fd,Data,10);
    printf("%d bytes gets successfully read from the file\n",iRet);

    printf("Data from is \n");
    write(1,Data,iRet);

    return 0;
}
