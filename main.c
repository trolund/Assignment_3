#include <stdio.h>
#include <MacTypes.h>
#include <tgmath.h>
#include <ctype.h>

int numberOfRoofs;

double getDistance(struct Point a, struct Point b);

void initData();

struct Roof {
    struct Point left;
    struct Point right;
    double distance;
} roof1, roof2;

void getInput(){
    int num;
    printf("Enter number of roofs");
    do {
        num = getchar();
    }while (!isdigit(num));

    printf("roof data:");
        char s[100];
        scanf("%[^\t]",s);
        printf("%s",s);

    }



void init() {
    roof1.left.v = 1;
    roof1.left.h = 7;

    roof1.right.v = 5;
    roof1.right.h = 6;

    roof1.distance = getDistance(roof1.left, roof1.right);

    roof2.left.v = 3;
    roof2.left.h = 8;

    roof2.right.v = 7;
    roof2.right.h = 7;

    roof2.distance = getDistance(roof2.left, roof2.right);
}

int main() {

    getInput();








    return 0;
}


double getDistance(struct Point a, struct Point b)
{
    double distance;
    distance = sqrt((a.h - b.v) * (a.v - b.h) + (a.h-b.h) *(a.h-b.h));
    return distance;
}



