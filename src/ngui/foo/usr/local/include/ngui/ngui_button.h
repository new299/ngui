#ifndef NGUI_BUTTON
#define NGUI_BUTTON

#include <SDL.h>

void ngui_move_button(const char *name,int nx,int ny);

int ngui_add_button(int x,int y,const char *text,ngui_callback_void callback, uint32_t colour = 0x4444ffff);

void ngui_delete_button(int id);

void ngui_receiveall_button(SDL_Event *event);

void ngui_renderall_button();

extern SDL_Renderer *ngui_renderer;

#endif
