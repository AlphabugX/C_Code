#include <stdio.h>
/*int function(){
	char X='K';
	return(X);
}*/
void newline(void)
{
	printf("\n");
}
void threeline(void)
{
	newline();
	newline();
	newline();
}
int main(void){
	//printf("Hello,%C!",function());
	printf("Three lines:\n");
	threeline();
	printf("Another three lines.\n");
	threeline();
	return 0;
}
