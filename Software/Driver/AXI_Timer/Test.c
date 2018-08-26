#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int Status;
	int File;
	char Array[16];

	File = open("/proc/AXI_Timer/ClockFrequency", O_RDWR);
	
	if(File < 0)
	{
		printf("Datei kann nicht geoeffnet werden!\n");
		return -1;
	}

	read(File, Array, sizeof(Array));
	printf("Data: %s\n", Array);
	
	while(1);

	close(File);
	return 0;
}
