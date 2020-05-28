#include<stdio.h>
int main()
{
int b=0,i,sum=0,a[]={1,2,3,4,5},j,goal;
printf("Enter the goal:\n");
scanf("%d",&goal);
for(i=0;i<5;i++){
	sum=sum+a[i];
	for(j=b;j<=i;j++){
	printf("%d\t",a[b]);
	}
	if(sum>goal)
	{
		sum=sum-a[b];
		b++;
		if(sum==goal){
		for(b;b<=i;b++)
		printf("%d\t",a[b]);

		}
	}
}
getch();
return 0;
}