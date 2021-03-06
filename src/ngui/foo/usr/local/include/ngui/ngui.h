#ifndef NGUI
#define NGUI

#include <SDL.h>
#include <limits.h>

#define NGUI_MAX_TEXT_SIZE			LINE_MAX
#define NGUI_MAX_NAME_SIZE			128
#define NGUI_MAX_GUI_ELEMENTS		64

extern struct SDL_Renderer *ngui_renderer;
typedef void (*ngui_callback_void)();
typedef void (*ngui_callback_char)(const char *);

#include "ngui_info_prompt.h"
#include "ngui_textlabel.h"
#include "ngui_textbox.h"
#include "ngui_flowbox.h"
#include "ngui_button.h"
#include "ngui_stringselect.h"

void ngui_set_renderer(struct SDL_Renderer *s,ngui_callback_void redraw_callback);
void ngui_receive_event(SDL_Event *event);
void ngui_render();
void ngui_redraw_required();

#endif
