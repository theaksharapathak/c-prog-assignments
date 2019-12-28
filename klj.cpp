#include <stdio.h>
#include <math.h>

int main(void) {
    float Ax,Ay,Bx,By,Cx,Cy,A,B,C,side,area;
    printf("hello inPut x,y coords");
    printf("input 3 numbers for your x coordinates");
    scanf("%f%f%f",&Ax,&Bx,&Cx );
    printf("input 3 numbers for your y coordinates");
    scanf("%f%f%f",&Ay,&By,&Cy);

    A=sqrt(((Bx-Ax)*(Bx-Ax))+((By-Ay)*(By-Ay)));
    B=sqrt(((Cx-Bx)*(Cx-Bx))+((Cy-By)*(Cy-By)));
    C=sqrt(((Ax-Cx)*(Ax-Cx))+((Ay-Cy)*(Ay-Cy)));



    side=((A+B+C)/2);

    area=sqrt(side*(side-A)*(side-B)*(side-C));
    printf("n AREA OF TRIANGLE IS %f",area);

}
