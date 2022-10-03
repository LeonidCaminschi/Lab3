#pragma once

#include <iostream>

using namespace std;

namespace Roles {

    struct Marauder { // 1st class
    private:
        int health;
        int max_health;
        int armor;
        int mana;
        int max_mana;
        int strength;
        int dexterity;
        int intelligence;
        int luck;
        bool alive;
    public:
        Marauder() :
        max_health(35),
        armor(20),
        max_mana(12),
        strength(22),
        dexterity(16),
        intelligence(8),
        luck(13),
        alive(true)
        {
            health = max_health;
            mana = max_mana;
        }

        void rage() {
            strength += 5;
            health -= 5;
            mana -= 3;
        }

        void attack(int &enemy_health) {
            enemy_health -= strength;
            if(enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            }
            else {
                cout << "Enemy has been anihilated" << endl;
            }
        }

        void check_alive() {
            if(health <= 0) {
                cout << "Marauder is dead continue your way without him" << endl;
                alive = false;
            }
        }

        void defend(int incoming_attack) {
            health -= (incoming_attack - armor < 0)?0:incoming_attack - armor;
            check_alive();
        }

        void fear(int &enemy_strength) {
            if (strength > enemy_strength) {
                enemy_strength -= 5;
                cout << "enemy strength reduced by 5 units" << endl;
            }
        }

        void dual_chop(int &enemy_health) {
            enemy_health -= strength * 3/4 * 2;
        }
    };

    struct Wizard { // 2nd class
    private:
        int health;
        int max_health;
        int armor;
        int mana;
        int max_mana;
        int strength;
        int dexterity;
        int intelligence;
        int luck;
        bool alive;
    public:
        Wizard() :
                max_health(20),
                armor(12),
                max_mana(32),
                strength(6),
                dexterity(16),
                intelligence(26),
                luck(14),
                alive(true)
        {
            health = max_health;
            mana = max_mana;
        }

        void reflection() {
            armor += 10;
            mana -= 8;
        }

        void attack(int &enemy_health) {
            enemy_health -= intelligence;
            if(enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            }
            else {
                cout << "Enemy has been anihilated" << endl;
            }
        }

        void check_alive() {
            if(health <= 0) {
                cout << "Wizard is dead continue your way without him" << endl;
                alive = false;
            }
        }

        void defend(int incoming_attack) {
            health -= (incoming_attack - armor < 0)?0:incoming_attack - armor;
            check_alive();
        }

        void arcane_trap(int &enemy_health, int &enemy_armor) {
            enemy_health -= (enemy_health - 5 < 0)?enemy_health:5;
            enemy_armor -= (enemy_armor - 3 < 0)?enemy_armor:3;
        }

        void thunderStrike(int &enemy_health) {
            enemy_health -= intelligence + strength * 3/2;
            if(enemy_health > 0) {
                cout << "Enemy has been smited but has" << enemy_health << " more hp after the attack" << endl;
            }
            else {
                cout << "Enemy has been perished into ashes" << endl;
            }
        }
    };

    struct Rogue { // 3rd class
    private:
        int health;
        int max_health;
        int armor;
        int mana;
        int max_mana;
        int strength;
        int dexterity;
        int intelligence;
        int luck;
        bool alive;
    public:
        Rogue() :
                max_health(15),
                armor(9),
                max_mana(24),
                strength(18),
                dexterity(31),
                intelligence(26),
                luck(21),
                alive(true) {
            health = max_health;
            mana = max_mana;
        }

        void intoTheShadows() {
            dexterity += 10;
            mana -= 7;
        }

        void attack(int &enemy_health) {
            enemy_health -= dexterity - 1 / 4 * strength;
            if (enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            } else {
                cout << "Enemy has been anihilated" << endl;
            }
        }

        void check_alive() {
            if (health <= 0) {
                cout << "Rogue is dead continue your way without him" << endl;
                alive = false;
            }
        }

        void defend(int incoming_attack) {
            health -= (incoming_attack - armor + dexterity * 1 / 5 < 0) ? 0 : incoming_attack - armor;
            check_alive();
        }

        void smokeScreen(int &enemy_accuracy) {
            enemy_accuracy /= 3;
        }

        void poisonStrike(int &enemy_health) {
            enemy_health -= dexterity + strength * 2;
            if (enemy_health > 0) {
                cout << "Enemy has been poisoned but has" << enemy_health << " more hp after the attack" << endl;
            } else {
                cout << "Enemy has been strongly poisoned and has beathed its last breath" << endl;
            }
        }
    };

    struct Crusader { // 4th class
    private:
        int health;
        int max_health;
        int armor;
        int mana;
        int max_mana;
        int strength;
        int dexterity;
        int intelligence;
        int luck;
        bool alive;
        int faith;
    public:
        Crusader() :
                max_health(40),
                armor(18),
                max_mana(12),
                strength(18),
                dexterity(4),
                intelligence(7),
                luck(8),
                alive(true),
                faith(18)
        {
            health = max_health;
            mana = max_mana;
        }

        void holy_heal() {
            health += faith;
            mana -= 12;
            cout << "Crusader has been fully healed" << endl;
        }

        void attack(int &enemy_health) {
            enemy_health -= strength;
            if(enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            }
            else {
                cout << "Enemy has been anihilated" << endl;
            }
        }

        void check_alive() {
            if(health <= 0) {
                cout << "Crusader is dead continue your way without him" << endl;
                alive = false;
            }
        }

        void defend(int incoming_attack) {
            health -= (incoming_attack - armor < 0)?0:incoming_attack - armor;
            check_alive();
        }

        void holyForce(int &enemy_health) {
            enemy_health -= (enemy_health - armor < 0)?enemy_health:enemy_health - armor;
        }

        void lastBreathe(int &ally_hp) {
            ally_hp = 2 * max_health;
        }
    };

    struct Highwayman { // 5th class
    private:
        int health;
        int max_health;
        int armor;
        int mana;
        int max_mana;
        int strength;
        int dexterity;
        int intelligence;
        int luck;
        bool alive;
    public:
        Highwayman() :
                max_health(20),
                armor(10),
                max_mana(9),
                strength(23),
                dexterity(16),
                intelligence(9),
                luck(18),
                alive(true)
        {
            health = max_health;
            mana = max_mana;
        }

        void shoot(int &enemy_health) {
            enemy_health -= 3/2 * strength;
            if(enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            }
            else {
                cout << "Enemy has been anihilated" << endl;
            }
            mana -= 3;
        }

        void attack(int &enemy_health) {
            enemy_health -= strength;
            if(enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            }
            else {
                cout << "Enemy has been anihilated" << endl;
            }
        }

        void check_alive() {
            if(health <= 0) {
                cout << "Highwayman is dead continue your way without him" << endl;
                alive = false;
            }
        }

        void defend(int incoming_attack) {
            health -= (incoming_attack - armor < 0)?0:incoming_attack - armor;
            check_alive();
        }

        void ignite(int &enemy_health) {
            enemy_health -= 15;
        }

        void eatOrange() {
            health = max_health;
            max_health -= 1;
        }
    };

    struct Abomination { // 6th class
    private:
        int health;
        int max_health;
        int armor;
        int mana;
        int max_mana;
        int strength;
        int dexterity;
        int intelligence;
        int luck;
        bool alive;
        bool beast;
    public:
        Abomination() :
                max_health(32),
                armor(17),
                max_mana(2),
                strength(25),
                dexterity(10),
                intelligence(5),
                luck(14),
                alive(true),
                beast(false)
        {
            health = max_health;
            mana = max_mana;
        }

        void lunge(int &enemy_health) {
            enemy_health -= 3/2 * strength;
            if(enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            }
            else {
                cout << "Enemy has been anihilated" << endl;
            }
            mana -= 3;
        }

        void attack(int &enemy_health) {
            enemy_health -= strength;
            if(enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            }
            else {
                cout << "Enemy has been anihilated" << endl;
            }
        }

        void check_alive() {
            if(health <= 0) {
                cout << "Abomination is dead continue your way without him" << endl;
                alive = false;
            }
        }

        void defend(int incoming_attack) {
            health -= (incoming_attack - armor < 0)?0:incoming_attack - armor;
            check_alive();
        }

        void beastTransform() {
            strength *= 2;
            health /= 2;
            max_health /= 2;
            beast = true;
        }

        void bite(int &enemy_health) {
            if (beast) {
                enemy_health -= strength*2;
            }
        }
    };

    struct Knight { // 7th class
    private:
        int health;
        int max_health;
        int armor;
        int mana;
        int max_mana;
        int strength;
        int dexterity;
        int intelligence;
        int luck;
        bool alive;
        int faith;
    public:
        Knight() :
                max_health(42),
                armor(21),
                max_mana(0),
                strength(21),
                dexterity(4),
                intelligence(2),
                luck(11),
                alive(true),
                faith(18)
        {
            health = max_health;
            mana = max_mana;
        }

        void lunge(int &enemy_health) {
            enemy_health -= 3 / 2 * strength;
            if (enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            } else {
                cout << "Enemy has been anihilated" << endl;
            }
            mana -= 3;
        }

        void attack(int &enemy_health) {
            enemy_health -= strength;
            if (enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            } else {
                cout << "Enemy has been anihilated" << endl;
            }
        }

        void check_alive() {
            if (health <= 0) {
                cout << "Knight is dead continue your way without him" << endl;
                alive = false;
            }
        }

        void defend(int incoming_attack) {
            health -= (incoming_attack - armor < 0) ? 0 : incoming_attack - armor;
            check_alive();
        }

        void fotify() {
            armor += 1 / 4 * armor;
        }

        void shield_bash(int &enemy_health, bool &enemy_stun_status) {
            enemy_health -= 1 / 2 * strength;
            if (enemy_health > 0) {
                cout << "Shield bash but enemy has " << enemy_health << " more hp after the attack" << endl;
                enemy_stun_status = true;
            } else {
                cout << "Enemy has been anihilated" << endl;
            }
        }
    };

    struct Necromancer { // 8th class
    private:
        int health;
        int max_health;
        int armor;
        int mana;
        int max_mana;
        int strength;
        int dexterity;
        int intelligence;
        int luck;
        bool alive;
        int summoned;
    public:
        Necromancer() :
                max_health(31),
                armor(12),
                max_mana(20),
                strength(5),
                dexterity(5),
                intelligence(19),
                luck(13),
                alive(true),
                summoned(0)
        {
            health = max_health;
            mana = max_mana;
        }

        void steal(int &enemy_health) {
            enemy_health -= 1 / 2 * intelligence;
            if (enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            } else {
                cout << "Enemy has been anihilated" << endl;
            }
            mana -= 3;
            health += 1 / 4 * intelligence;
        }

        void attack(int &enemy_health) {
            enemy_health -= intelligence;
            if (enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            } else {
                cout << "Enemy has been anihilated" << endl;
            }
        }

        void check_alive() {
            if (health <= 0) {
                cout << "Necromancer is dead continue your way without him" << endl;
                alive = false;
            }
        }

        void defend(int incoming_attack) {
            health -= (incoming_attack - armor < 0) ? 0 : incoming_attack - armor;
            check_alive();
        }

        void undead_armor() {
            armor += 1 / 2 * armor;
            mana -= 8;
        }

        void summonUndead() {
            summoned++;
            mana -= 15;
        }
    };

    struct Priest { // 9th class
    private:
        int health;
        int max_health;
        int armor;
        int mana;
        int max_mana;
        int strength;
        int dexterity;
        int intelligence;
        int luck;
        bool alive;
        int faith;
    public:
        Priest() :
                max_health(28),
                armor(8),
                max_mana(25),
                strength(6),
                dexterity(8),
                intelligence(17),
                luck(12),
                alive(true),
                faith(21)
        {
            health = max_health;
            mana = max_mana;
        }

        void holyFire(int &enemy_health) {
            enemy_health -= 1 / 2 * intelligence;
            if (enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            } else {
                cout << "Enemy has been anihilated" << endl;
            }
            mana -= 5;
            armor++;
        }

        void attack(int &enemy_health) {
            enemy_health -= intelligence;
            if (enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            } else {
                cout << "Enemy has been anihilated" << endl;
            }
        }

        void check_alive() {
            if (health <= 0) {
                cout << "Priest is dead continue your way without him" << endl;
                alive = false;
            }
        }

        void defend(int incoming_attack) {
            health -= (incoming_attack - armor < 0) ? 0 : incoming_attack - armor;
            check_alive();
        }

        void holyHeal(int &allyhp) {
            allyhp += allyhp/2;
            mana -= 10;
        }

        void revive(int &allyhp, bool &alive) {
            alive = true;
            allyhp = 1;
            mana -= 25;
        }
    };

    struct Summoner { // 8th class
    private:
        int health;
        int max_health;
        int armor;
        int mana;
        int max_mana;
        int strength;
        int dexterity;
        int intelligence;
        int luck;
        bool alive;
        int summoned;
    public:
        Summoner() :
                max_health(24),
                armor(11),
                max_mana(31),
                strength(1),
                dexterity(11),
                intelligence(23),
                luck(9),
                alive(true),
                summoned(0)
        {
            health = max_health;
            mana = max_mana;
        }

        void summonSpirit(int &enemy_health) {
            summoned++;
            mana -= 3;
            enemy_health -= 1/4 * intelligence;
            if (enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            } else {
                cout << "Enemy has been anihilated" << endl;
            }
        }

        void attack(int &enemy_health) {
            enemy_health -= intelligence;
            if (enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            } else {
                cout << "Enemy has been anihilated" << endl;
            }
        }

        void check_alive() {
            if (health <= 0) {
                cout << "Summoner is dead continue your way without him" << endl;
                alive = false;
            }
        }

        void defend(int incoming_attack) {
            health -= (incoming_attack - armor < 0) ? 0 : incoming_attack - armor;
            check_alive();
        }

        void summonGuardian(int &enemy_health) {
            armor += armor;
            mana -= 10;
            enemy_health -= intelligence;
            if (enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            } else {
                cout << "Enemy has been anihilated" << endl;
            }
        }

        void summonBear(int &enemy_health) {
            summoned++;
            mana -= 15;
            enemy_health -= 2*intelligence;
            if (enemy_health > 0) {
                cout << "Enemy has " << enemy_health << " more hp after the attack" << endl;
            } else {
                cout << "Enemy has been anihilated" << endl;
            }
        }
    };
} // namespace Roles
