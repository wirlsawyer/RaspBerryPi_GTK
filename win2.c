#include <gtk/gtk.h>

//gcc win2.c -o win2 `pkg-config --cflags --libs gtk+-2.0`

void clicked_callback(GtkWidget *widget, gpointer data)
{
	printf("Did press:%s\n", data);
}

int main(int argc, char *argv[])
{
	GtkWidget *window;
    	GtkWidget *button;

	gtk_init(&argc, &argv);

        // create a new window
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

       	// set title	
	gtk_window_set_title(GTK_WINDOW (window), "Win2");

	// set the border width of the window
	gtk_container_set_border_width(GTK_CONTAINER (window), 100);
	gtk_widget_realize(window);

	// create a new button
	button = gtk_button_new();
	gtk_widget_show(button);
       	gtk_container_add(GTK_CONTAINER (window), button);

	// connect the "clicked" signal of the button to our callback
 	gtk_signal_connect(GTK_OBJECT (button), "clicked", GTK_SIGNAL_FUNC (clicked_callback), (gpointer) "cool button");
	
	// show window
	gtk_widget_show(window);

	// rest in gtk_main and wait for the fun to begin!
	gtk_main();
	
	return 0;
}
