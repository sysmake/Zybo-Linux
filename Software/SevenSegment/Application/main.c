#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/mman.h> 
#include <sys/stat.h>
#include <sys/types.h>

int main()
{
	int Mem;
	int* Map;

    Mem = open("/dev/mem", O_RDWR | O_SYNC);
    if(Mem < 0) 
	{
		perror("Error opening file for reading");
		exit(EXIT_FAILURE);
    }

    Map = mmap(NULL, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, Mem, 0x43C00000);
    if(Map < 0) 
	{
		close(Mem);
		perror("Error mmapping the file");
		exit(EXIT_FAILURE);
    }

	*(Map) = 0x18;

    if(munmap(Map, 4096) < 0)
	{
		perror("Error un-mmapping the file");
    }
	close(Mem);

	while(1)
	{

	}
}