#include <stdio.h>
//bool SubsetSum(int [], int , int);
int main()
{
  int set[] = {3, 34, 4, 12, 5, 2};
  int sum = 9;
  int n = sizeof(set)/sizeof(set[0]);
  if (SubsetSum(set, n, sum) ==1)
     printf("Found a subset with given sum");
  else
     printf("No subset with given sum");
  return 0;
}
bool SubsetSum(int set[], int n, int sum)
{
   // Base Cases
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;

   // If last element is greater than sum, then ignore it
   if (set[n-1] > sum)
     return SubsetSum(set, n-1, sum);

    return SubsetSum(set, n-1, sum) ||
			SubsetSum(set, n-1, sum-set[n-1]);
}


