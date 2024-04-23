#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int option;
	void view_time() {
		
		time_t s,val = 1;
		struct tm* current_time;
		
		//time in seconds
		s = time(NULL);
		// to get current time
		
		current_time = localtime(&s);
		
		// print time in minutes
		// hours and seconds
		
		printf("%02d : %02d : %02d\n\n", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
	} 
	for(;;)
	{
	
		printf("Please chose an option from\nthe menu\n\n");
		printf("======== MENU =============\n");
		printf("===========================\n");
		printf("=== 1 = View Time       ===\n");
		printf("===========================\n");
		scanf("%d", &option);
	
		if(option == 1)
		{
			view_time();
			printf("\n");
		}
		else
		{
			printf("You can only pick 1(One)...\n");
		}
	}
	
	return 0;
}
