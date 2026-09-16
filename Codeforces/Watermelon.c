#include <stdio.h>
int main ()
{
    int n;//weight of watermelon
    scanf("%d",&n);
    if(1<=n<=100)
    {

       if(n==2) printf("NO");//2 is divided 1 and 1
         else if(n%2==0)//all even is divides into two even nember
            printf("YES");
            else//odd weight is not devided into two even number
                printf("NO");
    }

    return 0;
}
