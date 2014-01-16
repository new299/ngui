#ifndef NGUI_TEXTLABEL
#define NGUI_TEXTLABEL

#include <SDL.h>

int ngui_add_textlabel(int x,int y,const char *text, uint32_t colour = 0x4444ffff); // blue

void ngui_delete_textlabel(int id);

void ngui_receiveall_textlabel(SDL_Event *event);

void ngui_renderall_textlabel();

void ngui_modify_textlabel(int idx,const char *text, uint32_t colour = 0x0000ffff);

extern SDL_Surface *ngui_screen;

#endif
