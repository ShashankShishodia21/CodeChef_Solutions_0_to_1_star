#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
  while(t--){
    long int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if (a>b || b<a){
	    printf(">\n");
	}
	else if (a<b || b>a){
	    printf("<\n");
	}
	else if (a==b){
	    printf("=\n");
	}
  }
	return 0;
}

