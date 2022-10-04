#include "classes.h"

using namespace Roles;

int main() {
    cout << "Marauder 1st class" << endl;

    Marauder player1;
    Marauder player2;
    player1.rage();
    player1.fear(player2);
    player2.defend(player1.attack());
    player2.defend(player1.dual_chop());
    player1.meditate();

    cout << endl << "Wizard 2nd class" << endl;

    Wizard player3;
    Wizard player4;
    player3.reflection();
    player4.defend(player3.arcane_trap(player4));
    player4.defend(player3.attack());
    player4.defend(player3.thunderStrike());
    player3.meditate();

    cout << endl << "Rogue 3rd class" << endl;

    Rogue player5;
    Rogue player6;
    player5.intoTheShadows();
//    player5.smokeScreen();
    player6.defend(player5.attack());
    player6.defend(player5.poisonStrike());
    player5.meditate();

    cout << endl << "Crusader 4th class" << endl;

    Crusader player7;
    Crusader player8;
    player7.holy_heal();
    player8.defend(player7.attack());
    player8.defend(player7.armorBash());
    player7.meditate();
    player8.defend(player7.lastBreathe());

    cout << endl << "Highwayman 5th class" << endl;

    Highwayman player9;
    Highwayman player10;
    player10.defend(player9.shoot());
    player10.defend(player9.attack());
    player10.defend(player9.ignite());
    player10.eatOrange();
    player9.meditate();

    cout << endl << "Abomination 6th class" << endl;

    Abomination player11;
    Abomination player12;
    player12.defend(player11.attack());
    player11.beastTransform();
    player12.defend(player11.lunge());
    player12.defend(player11.bite());
    player11.meditate();

    cout << endl << "Knight 7th class" << endl;

    Knight player13;
    Knight player14;
    player13.fotify();
    player14.defend(player13.attack());
    player14.defend(player13.lunge());
    player13.shield_bash();

    cout << endl << "Necromancer 8th class" << endl;

    Necromancer player15;
    Necromancer player16;
    player15.undead_armor();
    player16.defend(player15.steal());
    player16.defend(player15.attack());
    player15.meditate();
    player16.defend(player15.summonUndead());

    cout << endl << "Priest 9th class" << endl;

    Priest player17;
    Priest player18;
    player18.defend(player17.holyFire());
    player18.holyHeal();
//    player17.revive(player16);
    player18.defend(player17.attack());
    player17.meditate();

    cout << endl << "Summoner 10th classs" << endl;

    Summoner player19;
    Summoner player20;
    player20.defend(player19.attack());
    player20.defend(player19.summonBear());
    player20.defend(player19.summonSpirit());
    player20.defend(player19.summonGuardian());
    player19.meditate();
}
