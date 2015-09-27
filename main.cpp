#include <allegro.h>
#include "inicia.h"

/*Iniciamos el Juego*/
int main(){
    inicia_allegro(640,480); //inicia allegro
    inicia_audio(70,70); //inicia audio

    BITMAP *buffer = create_bitmap(640, 480);
    clear_to_color(buffer, 0xFFFFFF);

    /*Variables*/
    /*Stancia*/
    BITMAP *stand1;
    BITMAP *vstand1;
    /*Stancia*/

    /*Caminata*/
    BITMAP *walk1;
    BITMAP *walk2;
    BITMAP *walk3;
    BITMAP *walk4;
    BITMAP *walk5;
    BITMAP *walk6;
    BITMAP *vwalk1;
    BITMAP *vwalk2;
    BITMAP *vwalk3;
    BITMAP *vwalk4;
    BITMAP *vwalk5;
    BITMAP *vwalk6;
    /*Caminata*/

    /*Agacharse*/
    BITMAP *Agachado1;
    BITMAP *Agachado2;
    BITMAP *Agachado3;
    BITMAP *vAgachado1;
    BITMAP *vAgachado2;
    BITMAP *vAgachado3;
    /*Agacharse*/

    BITMAP *lanzakunai;
    BITMAP *lanzakunai2;
    BITMAP *lanzakunai3;
    BITMAP *vlkunai;
    BITMAP *shuriken;
    BITMAP *jump1;
    BITMAP *jump2;
    BITMAP *vjump1;
    BITMAP *vjump2;
    BITMAP *Fondo;
    BITMAP *Piso;
    BITMAP *Golpe1;
    BITMAP *Golpe2;
    BITMAP *Golpe3;
    BITMAP *Golpe4;
    BITMAP *Damage1;
    BITMAP *Damage2;
    BITMAP *Damage3;
    /*Variables*/

    /*Enemy*/

    /*Enemy*/

    /*Cargar de Imagenes*/
    stand1 = load_bitmap("stand1.bmp",NULL);
    vstand1 = load_bitmap("vstand.bmp",NULL);
    walk1 = load_bitmap("walk1.bmp",NULL);
    walk2 = load_bitmap("walk2.bmp",NULL);
    walk3 = load_bitmap("walk3.bmp",NULL);
    walk4 = load_bitmap("walk4.bmp",NULL);
    walk5 = load_bitmap("walk5.bmp",NULL);
    walk6 = load_bitmap("walk6.bmp",NULL);
    vwalk1 = load_bitmap("vwalk1.bmp",NULL);
    vwalk2 = load_bitmap("vwalk2.bmp",NULL);
    vwalk3 = load_bitmap("vwalk3.bmp",NULL);
    vwalk4 = load_bitmap("vwalk4.bmp",NULL);
    vwalk5 = load_bitmap("vwalk5.bmp",NULL);
    vwalk6 = load_bitmap("vwalk6.bmp",NULL);
    Agachado1 = load_bitmap("Agachado1.bmp",NULL);
    Agachado2 = load_bitmap("Agachado2.bmp",NULL);
    Agachado3 = load_bitmap("Agachado3.bmp",NULL);
    vAgachado1 = load_bitmap("vAgachado1.bmp",NULL);
    vAgachado2 = load_bitmap("vAgachado2.bmp",NULL);
    vAgachado3 = load_bitmap("vAgachado3.bmp",NULL);
    jump1 = load_bitmap("jump1.bmp",NULL);
    jump2 = load_bitmap("jump2.bmp",NULL);
    shuriken = load_bitmap("shuriken.bmp",NULL);
    lanzakunai = load_bitmap("lanzakunai.bmp",NULL);
    lanzakunai2 = load_bitmap("lanzakunai2.bmp",NULL);
    lanzakunai3 = load_bitmap("lanzakunai3.bmp",NULL);
    vlkunai = load_bitmap("vlkunai.bmp",NULL);
    Fondo = load_bitmap("fondos.bmp",NULL);
    Piso = load_bitmap("piso.bmp",NULL);
    Golpe1 = load_bitmap("combo1.bmp",NULL);
    Golpe2 = load_bitmap("combo2.bmp",NULL);
    Golpe3 = load_bitmap("combo3.bmp",NULL);
    Golpe4 = load_bitmap("combo4.bmp",NULL);
    /*Cargar de Imagenes*/


    /*Ejes*/
    int y = 380; // Eje Y; Sí es positivo, baja; si es negativo, sube.//
    int x = 320; // Eje X
    int z;       // Eje Z, referente al arma.
    int p2y = 380;
    int p2x = 360;
    /*Ejes*/

    /*Colisiones*/
    x != p2x;
    /*Colisiones*/
    
    /*Variables Globales*/
    bool juego = true;
    bool frente = false;
    bool espalda = false;
    bool combo1 = false;
    bool damage = false;
    bool arma1 = false;
    bool arma2 = false;
    /*Variables Globales*/


    /*Fondo*/
    blit(buffer, screen , 0,0,0,0,640,480); //Buffer.
    blit(Fondo, buffer , 0,0,0,0,640,480);
    masked_blit(Piso, buffer ,0,0,0,0,640,480);
    draw_sprite(screen, stand1, x, y);
   // masked_blit(stand1 ,screen ,0,0,x,y,76,78);
    /*Fondo*/

    /*CONTROLES*/
    while(juego){//(!  key[KEY_ESC]){
        blit(buffer, screen , 0,0,0,0,640,480);
        draw_sprite(screen, stand1, x, y);
        //masked_blit(stand1 ,screen ,0,0,x,y,76,78);

        if (key[KEY_I]){ // Movimiento del lanzamiento del Kunai.
            blit(buffer, screen , 0,0,0,0,640,480);
            masked_blit(lanzakunai, screen, 0,0,x,y,76,78);
            rest(100);

            blit(buffer, screen , 0,0,0,0,640,480);
            masked_blit(lanzakunai2, screen, 0,0,x,y,76,78);
            rest(120);

            blit(buffer, screen , 0,0,0,0,640,480);
            masked_blit(lanzakunai3, screen, 0,0,x,y,76,78);
            rest(140);
            arma1 = true;
            z = x + 70;
        }

        /*Tecla A*/
        else if(key[KEY_A]){ //Caminata hacia la Izquierda.
            x -= 20;
            blit(buffer, screen , 0,0,0,0,640,480);
            masked_blit(vwalk1 ,screen ,0,0,x,y,76,78);
            rest(100);
            if (key[KEY_A]){
                blit(buffer, screen , 0,0,0,0,640,480);
                x -= 20;
                masked_blit(vwalk2 ,screen ,0,0,x,y,76,78);
                rest(100);
                if (key[KEY_A]){
                    blit(buffer, screen , 0,0,0,0,640,480);
                    x -= 20;
                    masked_blit(vwalk3 ,screen ,0,0,x,y,76,78);
                    rest(100);
                    if (key[KEY_A]){
                        blit(buffer, screen , 0,0,0,0,640,480);
                        x -= 20;
                        masked_blit(vwalk4 ,screen ,0,0,x,y,76,78);
                        rest(100);
                        if (key[KEY_A]){
                            blit(buffer, screen , 0,0,0,0,640,480);
                            x -= 20;
                            masked_blit(vwalk5 ,screen ,0,0,x,y,76,78);
                            rest(100);
                            if (key[KEY_A]){
                                blit(buffer, screen , 0,0,0,0,640,480);
                                x -= 20;
                                masked_blit(vwalk6 ,screen ,0,0,x,y,76,78);
                                rest(100);
                            }
                        }
                    }
                }
            }
         }

        /*Tecla D*/
        else if(key[KEY_D]){ //Caminata hacia la Derecha.
            x += 20;
            blit(buffer, screen , 0,0,0,0,640,480);
            masked_blit(walk1 ,screen ,0,0,x,y,76,78);
            rest(100);
            if (key[KEY_D]){
                blit(buffer, screen , 0,0,0,0,640,480);
                x += 20;
                masked_blit(walk2 ,screen ,0,0,x,y,76,78);
                rest(100);
                if (key[KEY_D]){
                    blit(buffer, screen , 0,0,0,0,640,480);
                     x += 20;
                    masked_blit(walk3 ,screen ,0,0,x,y,76,78);
                    rest(100);
                    if (key[KEY_D]){
                        blit(buffer, screen , 0,0,0,0,640,480);
                        x += 20;
                        masked_blit(walk4 ,screen ,0,0,x,y,76,78);
                        rest(100);
                        if (key[KEY_D]){
                            blit(buffer, screen , 0,0,0,0,640,480);
                            x += 20;
                            masked_blit(walk5 ,screen ,0,0,x,y,76,78);
                            rest(100);
                            if (key[KEY_D]){
                                blit(buffer, screen , 0,0,0,0,640,480);
                                x += 20;
                                masked_blit(walk6 ,screen ,0,0,x,y,76,78);
                                rest(100);
                            }
                        }
                    }
                }
            }
         }

        /*Tecla W*/
        else if (key[KEY_W]){
            y -= 80;
            //ve= 0;
            blit(buffer, screen , 0,0,0,0,640,480);
            masked_blit(jump1 ,screen ,0,0,x,y,76,78);
            rest(240);
            if (y = 300){
                blit(buffer, screen , 0,0,0,0,640,480);
                y +=80;
                masked_blit(jump2 ,screen ,0,0,x,y,76,78);
                rest(240);
            }    
        }
            

        /*Tecla S*/
        else if (key[KEY_S]){
            blit(buffer ,screen ,0,0,0,0,640,480);
            masked_blit(Agachado1, screen, 0,0,x,y,76,78);
            rest(100);
            if (key[KEY_S]){
                blit(buffer ,screen ,0,0,0,0,640,480);
                masked_blit(Agachado2, screen, 0,0,x,y,76,78);
                rest(100);
                if (key[KEY_S]){
                    blit(buffer ,screen ,0,0,0,0,640,480);
                    masked_blit(Agachado3, screen, 0,0,x,y,76,78);
                    rest(100);
                }
            }
        }
            /*Tecla J*/
        else if(key[KEY_J]){ //Cabezazo /*Combo 1*/
            blit(buffer, screen , 0,0,0,0,640,480);
            masked_blit(Golpe1 ,screen ,0,0,x,y,76,78);
            rest(20);

            blit(buffer, screen , 0,0,0,0,640,480);
            masked_blit(Golpe2 ,screen ,0,0,x,y,76,78);
            rest(20);
            combo1 = true;

            blit(buffer, screen , 0,0,0,0,640,480);
            masked_blit(Golpe3 ,screen ,0,0,x,y,76,78);
            rest(20);

            blit(buffer, screen , 0,0,0,0,640,480);
            masked_blit(Golpe4 ,screen ,0,0,x,y,76,78);
            rest(20);
            combo1 = false;
        }

            /*Arma*/
        if (arma1 = true){
            masked_blit(shuriken ,screen ,0,0,z,y+35,14,13);
            z += 45;
            if (z > 640){
                arma1 = false;
            }
            rest(50);
        }
        if(key[KEY_ESC]){ //Se cierra el juego.
            juego = false;
        }

    }

    /*Enemigo*/
    /*Enemigo*/

    readkey();
    /*Ligerando memoria*/
    destroy_bitmap(Fondo);
    destroy_bitmap(Piso);
    destroy_bitmap(stand1);
    destroy_bitmap(vstand1);
    destroy_bitmap(lanzakunai);
    destroy_bitmap(lanzakunai2);
    destroy_bitmap(lanzakunai3);
    destroy_bitmap(vlkunai);
    destroy_bitmap(Golpe1);
    destroy_bitmap(Golpe2);
    destroy_bitmap(Golpe3);
    destroy_bitmap(Golpe4);
    destroy_bitmap(walk1);
    destroy_bitmap(walk2);
    destroy_bitmap(walk3);
    destroy_bitmap(shuriken);
    destroy_bitmap(buffer);
    /*Ligerando memoria*/
    return 0;
}
END_OF_MAIN();
