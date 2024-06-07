#ifndef ROLEENTITY_H__
#define ROLEENTITY_H__

typedef struct RoleEntity RoleEntity;

RoleEntity *Role_Create();
void Role_SetAge(RoleEntity *role, int age);
int Role_GetAge(RoleEntity *role);

#endif