#include "RoleEntity.h"
#include <stdlib.h>

typedef struct RoleEntity {
    int age;
} RoleEntity;

RoleEntity* Role_Create() {
    RoleEntity *role = (RoleEntity *)malloc(sizeof(RoleEntity));
    role->age = 0;
    return role;
}

void Role_SetAge(RoleEntity *role, int age) {
    role->age = age;
}

int Role_GetAge(RoleEntity *role) {
    return role->age;
}