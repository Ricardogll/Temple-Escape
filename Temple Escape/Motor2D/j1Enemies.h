#ifndef __j1Enemies_H__
#define __j1Enemies_H__

#include "j1Module.h"

#define MAX_ENEMIES 500

enum ENEMY_TYPES
{
	NO_TYPE
};

class Enemy;

struct EnemyInfo
{
	ENEMY_TYPES type = ENEMY_TYPES::NO_TYPE;
	int x, y;
};

class j1Enemies : public j1Module
{
public:

	j1Enemies();
	~j1Enemies();

	bool Awake(pugi::xml_node& conf);
	bool Start();
	bool PreUpdate();
	bool Update();
	bool PostUpdate();
	bool CleanUp();
	void OnCollision(Collider* c1, Collider* c2);

	bool AddEnemy(ENEMY_TYPES type, int x, int y);
	uint handsDestroyed;
	bool bossDestroyed;

private:

	void SpawnEnemy(const EnemyInfo& info);

private:
	EnemyInfo queue[MAX_ENEMIES];
	Enemy* enemies[MAX_ENEMIES];
	SDL_Texture* enemy_sprites;

	uint screen_scale;
	uint screen_width;
	uint screen_height;

};

#endif // __j1Enemies_H__