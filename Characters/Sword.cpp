#include <allegro5/allegro.h>
#include "Sword.h"

Sword::Sword(Enemy* enemy, int x, int y, int attX, int attY) {
    this->sword = al_load_bitmap("../resources/swordsheet.png");
    this->x = x;
    this->y = y;
    this->attack = true;
    this->attackX = attX;
    this->attackY = attY;

    if (enemy != nullptr)
        enemy->getDamage();
}

void Sword::draw() {
    if (attack) {
        if (attackX > 1 && attackY == 0){
            al_draw_bitmap_region(sword, 50 * attackX, 50 * attackY, 50, 50, x,
                                  y, 0);
        }
        else if (attackX < 2 && attackY == 0){
            al_draw_bitmap_region(sword, 50 * attackX, 50 * attackY, 50, 50, x,
                                  y, 0);
        }
        else if (attackX > 1 && attackY == 1){
            al_draw_bitmap_region(sword, 50 * attackX, 50 * attackY, 50, 50, x,
                                  y, 0);
        }
        else if (attackX < 2 && attackY == 1){
            al_draw_bitmap_region(sword, 50 * attackX, 50 * attackY, 50, 50, x,
                                  y, 0);
        }
    }
    timer();
}

bool Sword::isAttacking() {
    return attack;
}

void Sword::timer(){
    animationTimer += 1;

    if (animationTimer % 22 == 0)
    {
        if (attackX % 2 == 0 ){
            attack = false;
        }
        attackX --;
    }
}

Sword::~Sword() {
    al_destroy_bitmap(sword);
}
