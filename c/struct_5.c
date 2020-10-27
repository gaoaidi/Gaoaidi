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
	struct time testTimes[5] = {
		{11,59,59}, {12,0,0}, {1,29,59}, {23,59,59}, {19,12,27}
	};
	int i;
	
	for(i=0;i<5;i++){
		printf("Time is %.2i:%.2i:%.2i\n", 
			testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
		testTimes[i] = timeUpdate(testTimes[i]);
		printf(" ...one second later it's %.2i:%.2i:%.2i\n",
			testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
	}
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