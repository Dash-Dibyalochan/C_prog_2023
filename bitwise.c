# include<stdio.h>
  int main(){
  	int a,b,c,d;
  	
	printf("enter 1st code");
  	scanf("%d%d",&a,&b);
  	c=a>>b;
  	printf("number is=%d\n",c);
  	
  	printf("enter 2nd code");
  	scanf("%d%d",&a,&b);
  	c=b<<a;
  	printf("enter solve value is = %d\n",c);
  	
  	printf("enter 3rd code");
  	scanf("%d%d",&a,&b);
  	c=a^b;
  	printf("value is=%d\n",c);
  	
  	printf("enter 4th code");
  	scanf("%d%d",&a,&b);
  	c=a|b;
  	printf("enter value=%d\n",c);
  	
  	printf("enter 5th code");
  	scanf("%d%d",&a,&b);
  	c=!a;
  	printf("enter value=%d",c);
  	
  	printf("enter 6th code");
  	scanf("%d%d",&a,&b);
  	c= a&b;
  	printf("enter value=%d",c);
  	
  	return 0;
  }
