#include <gtk/gtk.h>

//gcc win.c -o main `pkg-config --cflags --libs gtk+-2.0`

int main(int argc, char *argv[])
{
	GtkWidget *window;
    	
	gtk_init(&argc, &argv);
        // create a new window
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	
	// show window
	gtk_widget_show(window);

	// rest in gtk_main and wait for the fun to begin!
	gtk_main();
	
	return 0;
}
