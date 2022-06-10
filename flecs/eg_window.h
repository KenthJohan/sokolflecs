#pragma once
#include "flecs.h"


typedef struct
{
	ecs_bool_t opened;
} EgWindow;


extern ECS_COMPONENT_DECLARE(EgWindow);



void EgWindowsImport(ecs_world_t *world);
