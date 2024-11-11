#include <stdio.h>
 
enum days { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
typedef enum days days; 
days yesterday(days today) 
{
    return (today + 6) % 7;
}

days tomorrow(days today) 
{
    return (today + 1) % 7;
}
 
const char * const thedays[] = {"Monday", "Tuesday", "Wednesday", "Thursday","Friday", "Saturday", "Sunday"};
int main() 
{
    days today;
 
    printf("Today\tYesterday\tTomorrow\n");
    printf("=============================================\n");
 
    for (today = MONDAY; today <= SUNDAY; today++) {
        printf("%s = %d \t %s = %d \t %s = %d\n",
            thedays[today], today,
            thedays[yesterday(today)], yesterday(today),
            thedays[tomorrow(today)], tomorrow(today));
    }
 
    return 0;
}