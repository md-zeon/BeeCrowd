#include <stdio.h>

int main () {
	int day_1, day_2, hour_1, minute_1, second_1, second_2, hour_2, minute_2;
    scanf("Dia %d", &day_1);
    scanf("%d : %d : %d\n", &hour_1, &minute_1, &second_1);
    scanf("Dia %d", &day_2);
    scanf("%d : %d : %d", &hour_2, &minute_2, &second_2);

    int day, hour, minute, second;

    day = day_2 - day_1;
    hour = hour_2 - hour_1;
    minute = minute_2 - minute_1;
    second = second_2 - second_1;
    if(second < 0) {
        second += 60;
        minute--;
    }
    if(minute < 0) {
        minute += 60;
        hour--;
    }
    if(hour < 0) {
        hour += 24;
        day--;
    }

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", minute);
    printf("%d segundo(s)\n", second);
	
	return 0;
}