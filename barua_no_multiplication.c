#include <stdio.h>

int no_of_zeroes(int x){
    int a=0;
    while((x%10)==0){
        x = x/10;
        a++;
    }
    return a;
}

int fun(int x){
    while((x%10)==0){
        x = x/10;
    }
    return x;
}

int main()
{
    int x,y,z,c1,c2,c3,c,res,x1,y1,z1;
    x = 100000000;
    y = 123;
    z = 1000000;
    x1 = fun(x);
    y1 = fun(y);
    z1 = fun(z);
    c1 = no_of_zeroes(x);
    c2 = no_of_zeroes(y);
    c3 = no_of_zeroes(z);
    c = c1+c2+c3;
    res = x1*y1*z1;
    printf("%d",res);
    for(int i=0;i<c;i++){
        printf("0");
    }

    return 0;
}
