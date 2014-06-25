#include <stdio.h>

int main(){
    int i,j,x,numbers[20000000];
    int primes[2000000];

	printf("Give me a number.");
	scanf("%d",&x);

    for (i=0;i<x;i++){
        numbers[i]=i+2;
    }
    for (i=0;i<x;i++){
        if (numbers[i]!=-1){
            for (j=2*numbers[i]-2;j<x;j+=numbers[i])
                numbers[j]=-1;
        }
    }

    j=0;
    for(i=0;i<x&&j<primes;i++)
        if(numbers[i]!=-1)
            primes[j++]=numbers[i];

  
    for(i=0;i<primes;i++)
        if (primes[i]=NULL)
		{
			printf("%dn",i);	
		}
		else
		{
			printf("%dn",primes[i]);
		}
		

return 0;
}