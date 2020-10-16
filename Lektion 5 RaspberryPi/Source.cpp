#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include<time.h>
#include<stddef.h>


int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code
	while (true) {
		if (switchOn() == 1) {
			for (size_t index = 1; index <= 6; index++) {
				ledOn(index);
				Wait(100);

			}
			Wait(5000);
			for (size_t index = 1; index <= 6; index++) {
				ledOff(index);
				Wait(100);
			}
		}
		else {
			Wait(100);
		}

	}

	return 0;
}