#include <stdio.h>
#include <time.h>

int main(void) {
	time_t CURRENT_TIME = time(NULL);
	// replace 3600 with your own offset
	// UTC+1 is 3600*1 = 3600
	// thats how you change the timezone of this clock
	int hour = ((CURRENT_TIME+3600)%86400)/3600;
	int min = (CURRENT_TIME % 3600) / 60;
	// swatch beat
	int beat = ((CURRENT_TIME + 3600) % 86400 ) / 86.4;
	printf("%02d:%02d @%03d\n", hour, min, beat);
	return 0;
}
