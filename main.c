#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Input
    int m1, m2, m3, Total; //m1 = maths marks, m2 = science marks, m3 = english marks
    float Average;

    printf("Enter Mathematics, Science and English marks : ");
    scanf("%d %d %d", &m1,&m2,&m3);

    //1. Total and Average
    Total = m1 + m2 + m3;
    printf("Total marks : %d\n", Total);

    Average = Total / 3.0;
    printf("Average marks : %.2f\n", Average);

    //2. Grade System

    if(100 > Average && Average > 80) {
        printf("Grade: A\n");
    }else if(79 > Average && Average > 70){
        printf("Grade: B\n");
    } else if(69 > Average && Average > 60){
        printf("Grade: C\n");
    } else if(59 > Average && Average > 50){
        printf("Grade: D\n");
    } else if(Average < 50){
        printf("Grade: F\n");
    }

    //3. Pass / Fail Rule (IMPORTANT)

    if (m1>=40 && m2>=40 && m3>=40){
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL");
    }
    return 0;
}
