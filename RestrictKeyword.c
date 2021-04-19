#include<stdio.h>

//Note that the purpose of restrict to
//show only syntax. It dosent't change anything
//in output(or logic). It is just a way for
//programer to tell compler about an
//optimization
void use(int*a,int*b,int*restrict c)
{
    *a+=*c;

    //Since c is restrict, compiler will
    //not reload value at address c in
    //its assembly code. Therefore generated
    //assembly code is optimized
    *b+=*c;
}

int main()
{
    int a=50,b=60,c=70;
    use(&a,&b,&c);
    printf("%d%d%d",a,b,c);
    return 0;    
}