#include <stdio.h>
struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct time timeUpdate(struct time now);

int main(int argc, char const *argv[])
{
	FILE *p_out = fopen("1.out", "a");
	struct time test;
	while (scanf("%d:%d:%d", &test.hour, &test.minutes, &test. seconds) != EOF){
		fprintf(p_out,"Time is %.2i:%.2i:%.2i\n", 
			test.hour, test.minutes, test.seconds);
		test = timeUpdate(test);
		fprintf(p_out," ...one second later it's %.2i:%.2i:%.2i\n",
			test.hour, test.minutes, test.seconds);
		}
	fclose(p_out);
	return 0;
}

struct time timeUpdate(struct time now)
{
	if(now.seconds == 59 && now.minutes != 59){
		now.seconds = 0;
		now.minutes++;
	}else if (now.seconds == 59 && now.minutes == 59){
		now.seconds = 0;
		now.minutes = 0;
		now.hour++;
	}else{
		now.seconds++;
	}
	while(now.hour>=24){
		now.hour -= 24;
	}
	return now;
}