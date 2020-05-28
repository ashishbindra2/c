    /*
     * C Program to Find find Sum of the Series 1/1! + 2/2! + 3/3! + ……1/N!
     */
    #include <stdio.h>
    void main()
    {
	int i,n,f=1;
	float sum=0;
	clrscr();
	printf("\n Enter the value:  ");
	scanf("%d", &n);
		for (i = 1; i <= n; i++)
	{
	    f = f * i;
	    sum = sum + (float)i/(float)f;
	}
	printf("\n Sum of the above series = %f ", sum);
	getch();
    }

