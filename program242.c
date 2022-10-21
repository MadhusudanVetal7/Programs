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
    char Data[10];     //Mug
    int fd = 0;         //File descriptor
    int iRet = 0;

    printf("Enter file name to Open \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;      //Failure
    }
    printf("File is successfully Open with FD %d\n",fd);

    read(fd,Data,sizeof(Data));
    read(fd,Data,sizeof(Data));
    read(fd,Data,sizeof(Data));

    return 0;
}
