#include<unistd.h>
#include<sys/types.h>
#include<sys/ioctl.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main(){
	printf("Turning on the lights !\n");
	ioctl(tty_fd,KDSETLED, LED_NUM|LED_CAP|LEDSCR);
	sleep(1);
	printf("Done!\n");
	return 0;
}