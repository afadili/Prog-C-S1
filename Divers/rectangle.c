#include<stdio.h>
#include<MLV/MLV_all.h>
int main (){
	MLV_create_window("c","e",300,400);
	MLV_draw_rectangle(10,10,100,60, MLV_COLOR_GREEN);
	MLV_actualise_window();
	MLV_wait_seconds(5);
	MLV_free_window();
	printf("ogidkogij\n");
	return 0;
}
