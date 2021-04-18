#include<stdio.h>
#include<math.h>

/// Determine Triangles 3 Angles using 3 arms value
/// radian to Degree formula: 1rad × 180/π = 57.296°

int main()
{
    double a,b,c,angleA,angleB,angleC;

    scanf("%lf%lf%lf",&a,&b,&c);

    angleA = acos((b*b+c*c-a*a)/(2*b*c));
     angleA = angleA * 180 / 3.1416;
    angleB = acos((c*c+a*a-b*b)/(2*c*a));
     angleB = angleB * 180 / 3.1416;
    angleC = acos((a*a+b*b-c*c)/(2*a*b));
      angleC = angleC * 180 / 3.1416;

    printf("A = %.5lf\nB = %.5lf\nC = %.5lf\n",angleA,angleB,angleC);

    return 0;
}

