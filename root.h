#pragma once

namespace RootRole {

    struct Player {
    protected:
        int health;
        int max_health;
        int armor;
        int mana;
        int max_mana;
        int luck;
        bool alive;
        std::string name;
    public:
        virtual int attack() = 0;
        virtual void defend(int damage) = 0;
        bool check_alive() {
            if (health <= 0) {
                alive = false;
                std::cout << name << " has been defeated another challenger will take his space" << std::endl;
                return false;
            }
            return true;
        }
        void meditate() {
            if (max_mana == 0) {
                std::cout << "Could not meditate doesen't posses any mana" << std::endl;
                return;
            }
            if (mana + max_mana / 4 > max_mana) {
                mana = max_mana;
            } else {
                mana += max_mana / 4;
            }
            std::cout << name << " meditated and recovered mana total current mana " << mana << std::endl;
        }
    }; // Player struct

}; // Root namespace