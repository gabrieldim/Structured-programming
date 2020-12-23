
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