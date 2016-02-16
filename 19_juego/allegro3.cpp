#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro.h>
#include <time.h>


#define SW 800
#define SH 600
#define NW 32
#define NH 32
#define N 10
#define VMAX 5
struct Nave{
    double x;
    double y;
    double vx;
    double vy;
    double width;
    double height;
    ALLEGRO_BITMAP *img;
};



void recalcular_posiciones(struct Nave nave[N]){
    for(int i = 0;i<N; i ++){
    if(nave[i].x + nave[i].vx + nave[i].width > SW|| nave[i].x + nave[i].vx <0)
        nave[i].vx *= -1;
    if(nave[i].y+nave[i].vy+nave[i].height >SH || nave[i].y+nave[i].vy <0){
        nave[i].vy *= -1;
        nave[i].vy *= 0.7;
        nave[i].vx *= 0.7;
    }
    nave[i].x += nave[i].vx;
    nave[i].y += nave[i].vy;
    }
}
void iniciar(struct Nave nave[N]){
 for(int i=0;i<N;i++){
    nave[i].x=drand48()*SW;
    nave[i].y = drand48()*SH;
    nave[i].vx=drand48()*VMAX;
    nave[i].vy=drand48()*VMAX;
    nave[i].width=32;
    nave[i].height=32;
    nave[i].img=al_create_bitmap(nave[i].width,nave[i].height);
    al_set_target_bitmap(nave[i].img);
    al_clear_to_color(al_map_rgb(rand()%256,rand()%256,rand()%256));
 }
}

int main(int argc, const char **argv){



    //variables
    ALLEGRO_DISPLAY *ventana= NULL;
    ALLEGRO_EVENT_QUEUE *mensajes= NULL;
    ALLEGRO_TIMER *alarma = NULL;
    bool dibujar = true;
    struct Nave nave[N];
    srand(time(NULL));
    srand48(time(NULL));
    /*struct Nave nave= {40.,1.,32,32,NULL};
    struct Nanve nave = {40.,2.,42,42,NULL};*/
    //iniciar allegro
    al_init();
    //crear:
    //      -el display
    ventana = al_create_display(SW,SH);
    mensajes=al_create_event_queue();
    alarma = al_create_timer(1/60.);  
    //      -cola de eventos
    //      -timer

    //Registrar como fuente de eventos:
    //      -display
    al_register_event_source(mensajes,al_get_display_event_source(ventana));
    //      -timer
    al_register_event_source(mensajes,al_get_timer_event_source(alarma));
    //BUCLE:
     
    
    iniciar(nave);
    al_set_target_bitmap(al_get_backbuffer(ventana));
   
    al_start_timer(alarma); 
    while(1){
        //miro los eventos
        ALLEGRO_EVENT ev;
        al_wait_for_event(mensajes,&ev);
        //si cierran las ventanas salgo del bucle
        if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
            break;
        //si se cumple el tiempo:
        if(ev.type== ALLEGRO_EVENT_TIMER)
            dibujar = true;
        if(dibujar && al_is_event_queue_empty(mensajes)){
            dibujar = false;
           recalcular_posiciones(nave);
            al_clear_to_color(al_map_rgb(0,0,0));
           for(int i=0; i<N; i++)
            al_draw_bitmap(nave[i].img,nave[i].x,nave[i].y,0);
            al_flip_display();
           
        }
        //repintar
        //si repintar
        //no repintar
        //mover al cuadrado
        //pintar
    }
    //destruir el timer
    al_destroy_timer(alarma);
    //destruir el display
    al_destroy_display(ventana);
    //destruir cola de eventos
    al_destroy_event_queue(mensajes);



    return EXIT_SUCCESS;
}
