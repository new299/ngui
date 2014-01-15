#ifndef NGUI_TEXTBOX
#define NGUI_TEXTBOX

#include <stdbool.h>
#include <SDL.h>

int ngui_add_textbox(int x,int y,const char *text,bool passwordbox,ngui_callback_void callback);

void ngui_delete_textbox(int id);

void ngui_receiveall_textbox(SDL_Event *event);

void ngui_renderall_textbox();
                                
const char *ngui_textbox_get_value(int tb);
void ngui_textbox_set_value(int id,const char *value);

extern SDL_Surface *ngui_screen;

#endif
