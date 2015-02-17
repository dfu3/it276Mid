


//-creation
//-deletion
//-setup
//-action

#define MAX_ENTS 255

enum EntityType
{
	ENTTYPE_ENEMY,
	ENTTYPE_RET
};

struct Entity //typedef?
{
	EntityType type;
	float health;
	int inUse;
	//add sprite var

};

extern Entity entArr[MAX_ENTS]; 

extern int maxEnts;

Entity* CreateEntity();
void FreeEntity(Entity *ent);
void SetupEntity(Entity *ent, EntityType type, float health);

