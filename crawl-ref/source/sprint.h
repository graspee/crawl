#ifndef SPRINT_H
#define SPRINT_H

void sprint_give_items();
int sprint_modify_exp(int exp);
int sprint_modify_skills(int skill_gain);
int sprint_modify_piety(int piety);
int sprint_modify_abyss_exit_chance(int exit_chance);
bool sprint_veto_random_abyss_monster(monster_type type);

#endif
