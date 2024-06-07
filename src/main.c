#include <stdio.h>
#include <stdlib.h>
#include "../include/raylib.h"
#include "RoleEntity.h"

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

// ;
// 25, role, call 0x00
int main(int arg_count, char *arg_values[]) {

    RoleEntity* role = Role_Create();

    Role_SetAge(role, 25);

    printf("Role age: %d %d %d\n", Role_GetAge(role), 2, 45);

    if (arg_count > 1) {
        printf("Arg1: %s\n", arg_values[1]);
    }

    InitWindow(800, 600, "Hello World");

    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, World!", 10, 10, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();

    free(role);

    return EXIT_SUCCESS;

}