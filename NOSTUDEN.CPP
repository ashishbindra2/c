#include<stdio.h>
#include<conio.h>

void main()
{
    int n,a[100],c1,c2,c3,c4,i;
    c1 = c2 = c3 = c4 = 0;
    clrscr();

    printf("Enter the number:-");
    scanf("%d",&n);

    printf("\nEnter marks of %d student\n",n);

    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);

    for(i=1;i<=n;i++)
    {
        if(a[i] >= 80 && a[i] < 100)
        c1++;

        if(a[i] >= 60 && a[i] < 80)
        c2++;

        if(a[i] >= 40 && a[i] < 60)
        c3++;

        if(a[i] <= 40)
        c4++;
    }

    printf("\nStunent Whose Marks Between 80 And 100 Are :: %d ",c1);
    printf("\nStunent Whose Marks Between 60 And 80 Are :: %d ",c2);
    printf("\nStunent Whose Marks Between 40 And 60 Are :: %d ",c3);
    printf("\nStunent Whose Marks Less Then 40  Are   :: %d ",c4);


    getch();
}