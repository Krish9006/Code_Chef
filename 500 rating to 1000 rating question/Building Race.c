#include <stdio.h>


	// your code goes here
int main()
{
    int testcases;
    scanf("%d", &testcases);
    while (testcases--)
    {
        float first_person_floor, second_person_floor, first_person_speed, second_person_speed;
        scanf("%f%f%f%f", &first_person_floor, &second_person_floor, &first_person_speed, &second_person_speed);
        float c = first_person_floor / first_person_speed;
        float d = second_person_floor/ second_person_speed;
        if (c > d)
            printf("Chefina\n");
        if (c < d)
            printf("Chef\n");
        if (c == d)
            printf("Both\n");
    }
}

