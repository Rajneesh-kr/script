#include<stdio.h>

int length(void ) 
{
	printf("hello \n");
}


struct student
{
  int(*length)(void);
};

int main()
{
      //.len = length,
	struct student fops = length;
        fops.length();

    return 0;
}
