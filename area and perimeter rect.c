# include <stdio.h>
int main(){

    int length,width,area,perimeter;
    printf("enter length:");
    scanf("%d",&length);
    printf("enter width:");
    scanf("%d",&width);
    area = length*width;
    printf("The area is:%d",area);
    perimeter = 2*(length+width);
    printf("The perimeter is:%d",perimeter);

    return 0;
     

}