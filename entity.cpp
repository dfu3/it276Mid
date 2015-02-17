#include "entity.h"
#include <SDL.h>
#include <SDL_image.h>


Entity* CreateEntity(void)
{
	int i;

	Entity *ent;

	for ( i = 0; i < maxEnts; i++)
	{
		if( !(entArr[i].inUse) )
		{
			ent = &entArr[i];
			ent ->inUse = true;
		}

		if(maxEnts < 255)
		{
			ent = &entArr[maxEnts++];
			ent ->inUse = true;
		}

		if(i = maxEnts)
		{
			fprintf(stderr, "not enough entities", SDL_GetError());
			exit(1);
		}
	}
	return ent;
}

void FreeEntity(Entity *ent)
{
	ent ->inUse = false;
}

void SetupEntity(Entity *ent, EntityType inType, float inHealth)
{
	ent->health = inHealth;
	ent->type = inType;
}