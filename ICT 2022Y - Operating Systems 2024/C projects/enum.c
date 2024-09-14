#include <stdio.h>

enum day  {
    SUNDAY=1,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(){
    enum day today=SATURDAY;

    printf("%d",today);


    return 0;
}