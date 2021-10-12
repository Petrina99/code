#include <stdio.h>
#include <windows.h>

void clock(int hours, int minutes, int seconds);

int main() {

  int h;
  int m;
  int s;

  printf("Set hours: ");
  scanf(" %d",&h);

  printf("\nSet minutes: ");
  scanf(" %d",&m);

  printf("\nSet seconds: ");
  scanf(" %d",&s);

  clock(h,m,s);

  return 0;  
}


void clock(int hours, int minutes, int seconds) {

  /* d is used for delay so our clock function delays for 1 second to make it realistic */
  int d = 1000;

  /* while(1) makes an infinite loop */
  while(1) {
    seconds++;

    if (seconds > 59) {
      minutes++;
      seconds = 0;
    }

    if (minutes > 59) {
      hours++;
      minutes = 0;
    }

    if (hours > 12) {
      hours = 1;
    }

    printf("\n Clock: ");
    printf("\n %02d : %02d : %02d", hours, minutes, seconds);

    /* sleep for delaying the trigger of a function by 1 second (1000 miliseconds) */
    Sleep(d);
    /* clears the window on the end of trigger of a function */
    system("cls");
  }
}