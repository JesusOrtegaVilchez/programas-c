#include <stdio.h>
#include <allegro5/allegro.h>

int main(){

    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_EVENT_QUEUE *event_queue = NULL;

    al_init();

    display = al_create_display(640,480);
    event_queue = al_create_event_queue();

    al_register_event_source(event_queue,al_get_display_event_source(display));
    al_clear_to_color(al_map_rgb(0,61,236));
    al_flip_display();

    while(1)
    {
        ALLEGRO_EVENT ev;
        ALLEGRO_TIMEOUT timeout;
        al_init_timeout(&timeout, 0.06);

        bool get_event = al_wait_for_event_until(event_queue, &ev, &timeout);

        if(get_event && ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            break;
        }

        al_clear_to_color(al_map_rgb(156,10,20));
        al_flip_display();
    }



al_destroy_display(display);
al_destroy_event_queue(event_queue);

return 0;

}
