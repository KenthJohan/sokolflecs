#include "eg_window.h"
#include "eg_base.h"
#include <math.h>
#include <stdlib.h>


ECS_COMPONENT_DECLARE(EgWindow);




void EgWindowsImport(ecs_world_t *world)
{
	ECS_MODULE(world, EgWindows);
	ECS_COMPONENT_DEFINE(world, EgWindow);

	ecs_struct_init(world, &(ecs_struct_desc_t) {
	.entity.entity = ecs_id(EgWindow),
	.members = {
	{ .name = "opened", .type = ecs_id(ecs_bool_t) }
	}
	});
}
