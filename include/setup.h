/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** runner
*/

#pragma once

#define ERROR 84
#include "scene.h"

int start_game();

bool start_button(gc_engine *engine, int entity_id, gc_vector2 _);
bool options(gc_engine *engine, int entity_id, gc_vector2 _);
bool goto_main_menu(gc_engine *engine, int entity_id, gc_vector2 _);
bool quit(gc_engine *engine, int entity_id, gc_vector2 _);

int checkbox_update(gc_scene *s, gc_entity *entity, bool checked);
void resolution_set_text(gc_entity *entity, gc_engine *engine);

bool fullscreen(gc_engine *engine, int entity_id, gc_vector2 _);
bool resolution_down(gc_engine *engine, int entity_id, gc_vector2 _);
bool resolution_up(gc_engine *engine, int entity_id, gc_vector2 _);