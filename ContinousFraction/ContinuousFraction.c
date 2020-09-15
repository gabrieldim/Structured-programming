/*
Implement a recursive function that for a sequence of integers [a0, a1, ..., an − 1]
will calculate the value of a continuous fraction defined as: (open the picture)
Write a program in which an integer N is read, after which the elements of an array of N 
integers are read (not more than 100). 
Then the recursive function is called and the result is printed in a new line.

Test case:
Input:
	
7 3 7 15 1 292 1 1

Output:

3.141593


*/
#include <stdio.h>

float rek(int niza[],int n,int br) {
    if(n==1){ return niza[br];}
    else if(br==n-1){ 
        return (float)niza[br];
    } else  return niza[br]+ 1.0/rek(niza,n,br+=1);
}

int main() {
    
    int n;
    int niza[100];
	scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d", &niza[i]);
    }

    printf("%.6f", rek(niza,n,0));
	
}