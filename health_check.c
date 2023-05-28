#include <stdio.h>
#include <stdlib.h>

int main()
{
        int fev, head, weak, swat, drycf;
    printf("Do you have fever '1'for yes '0' for no: \n");
    scanf("%d" , &fev);
    printf("your choice is %d \n" , fev);


    printf("Do you have headache '1'for yes '0' for no:\n ");
    scanf("%d" , &head);
    printf("your choice is %d \n" , head);

    printf("Do you feel weakness in your body '1'for yes '0' for no:\n ");
    scanf("%d" , &weak);
    printf("your choice is %d \n" , weak);

    printf("Is your body producing more swat '1'for yes '0' for no:\n ");
    scanf("%d" , &swat);
    printf("your choice is %d \n" , swat);

    printf("Do you have dry cough '1'for yes '0' for no:\n ");
    scanf("%d" , &drycf);
    printf("your choice is %d \n" , drycf);

//    int fev, head, weak, swat, drycf;

    if(fev==1 && head==1 && weak==1 && swat==1 && drycf==1){
        printf("you have Typhoid you should go for doctor ");
    }else{
    printf("this inquire was for typhoid fever and you don't have typhoid");
    }





    return 0;
}
