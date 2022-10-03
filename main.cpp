#include "classes.h"

using namespace Roles;

int main() {
    cout << "Marauder 1st class" << endl;

    int enemyhp1 = 10;
    int enemyhp2 = 15;

    Marauder player1;
    player1.rage();
    player1.fear(enemyhp1);
    player1.attack(enemyhp1);
    player1.dual_chop(enemyhp2);

    cout << "Wizard 2nd class" << endl;

    enemyhp1 = 10;
    enemyhp2 = 15;
    int enemyarmor = 8;

    Wizard player2;
    player2.reflection();
    player2.arcane_trap(enemyhp2, enemyarmor);
    player2.attack(enemyhp1);
    player2.thunderStrike(enemyhp2);

    cout << "Rogue 3rd class" << endl;

    enemyhp1 = 10;
    enemyhp2 = 15;
    int enemyaccuracy = 33;

    Rogue player3;
    player3.intoTheShadows();
    player3.smokeScreen(enemyaccuracy);
    player3.attack(enemyhp1);
    player3.poisonStrike(enemyhp2);

    cout << "Crusader 4th class" << endl;

    enemyhp1 = 10;
    enemyhp2 = 15;
    int allyhp = 1;

    Crusader player4;
    player4.holy_heal();
    player4.attack(enemyhp1);
    player4.holyForce(enemyhp2);
    player4.lastBreathe(allyhp);

    cout << "Highwayman 5th class" << endl;

    enemyhp1 = 10;
    enemyhp2 = 15;

    Highwayman player5;
    player5.shoot(enemyhp1);
    player5.attack(enemyhp1);
    player5.ignite(enemyhp2);
    player5.eatOrange();

    cout << "Abomination 6th class" << endl;

    enemyhp1 = 10;
    enemyhp2 = 15;

    Abomination player6;
    player6.attack(enemyhp1);
    player6.beastTransform();
    player6.lunge(enemyhp1);
    player6.bite(enemyhp2);

    cout << "Knight 7th class" << endl;

    enemyhp1 = 10;
    enemyhp2 = 15;
    bool stun_status = false;

    Knight player7;
    player7.fotify();
    player7.attack(enemyhp1);
    player7.lunge(enemyhp1);
    player7.shield_bash(enemyhp2, stun_status);

    cout << "Necromancer 8th class" << endl;

    enemyhp1 = 10;
    enemyhp2 = 15;

    Necromancer player8;
    player8.undead_armor();
    player8.steal(enemyhp1);
    player8.attack(enemyhp2);
    player8.summonUndead();

    cout << "Priest 9th class" << endl;

    enemyhp1 = 10;
    enemyhp2 = 15;
    allyhp = 8;
    bool alive = false;

    Priest player9;
    player9.holyHeal(allyhp);
    allyhp = 0;
    player9.revive(allyhp, alive);
    player9.attack(enemyhp1);
    player9.holyFire(enemyhp2);

    cout << "Summoner 10th classs" << endl;

    enemyhp1 = 10;
    enemyhp2 = 15;

    Summoner player10;
    player10.attack(enemyhp1);
    player10.summonBear(enemyhp1);
    player10.summonSpirit(enemyhp2);
    player10.summonGuardian(enemyhp2);
}
