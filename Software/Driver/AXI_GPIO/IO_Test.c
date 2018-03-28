#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int Status;
	int File;
	char Array[2];

	File = open("/proc/AXI_GPIO/Input", O_RDWR);
	
	if(File < 0)
	{
		printf("Datei kann nicht geoeffnet werden!\n");
		return -1;
	}

	read(File, Array, 2);
	printf("Data: %s\n", Array);
	
	close(File);
	return 0;
}