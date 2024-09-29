#include<stdio.h>
main()
{
    float x, y, max;
    float maximum(float,float);
    printf("enter the values for x and y:");
    scanf("%f%f",&x,&y);
    max=maximum(x,y);
    printf("maximum=%f",max);

}
float maximum(float p,float q)

{
if(p>q)
        return(p);
else
    return(q);
}
