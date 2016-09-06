#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

struct minden{
    string name;
    int value;
};

int main()
{
    srand (time(NULL));
    vector<minden> stats;
    minden stat;
    stat.name = "STR";
    stat.value = rand() % 6 + rand() % 6 + rand() % 6 + 3;
    stats.push_back(stat);
    stat.name = "CON";
    stat.value = rand() % 6 + rand() % 6 + rand() % 6 + 3;
    stats.push_back(stat);
    stat.name = "DEX";
    stat.value = rand() % 6 + rand() % 6 + rand() % 6 + 3;
    stats.push_back(stat);
    stat.name = "POW";
    stat.value = rand() % 6 + rand() % 6 + rand() % 6 + 3;
    stats.push_back(stat);
    stat.name = "CHA";
    stat.value = rand() % 6 + rand() % 6 + rand() % 6 + 3;
    stats.push_back(stat);
    stat.name = "SIZ";
    stat.value = rand() % 6 + rand() % 6 + 8;
    stats.push_back(stat);
    stat.name = "INT";
    stat.value = rand() % 6 + rand() % 6 + 8;
    stats.push_back(stat);

    vector<minden> standard_skills;
    minden standard_skill;
    standard_skill.name = "athletics";
    standard_skill.value = stats[0].value + stats[2].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "boating";
    standard_skill.value = stats[0].value + stats[1].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "brawn";
    standard_skill.value = stats[0].value + stats[5].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "conceal";
    standard_skill.value = stats[3].value + stats[2].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "customs";
    standard_skill.value = stats[6].value + stats[6].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "dance";
    standard_skill.value = stats[4].value + stats[2].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "deceit";
    standard_skill.value = stats[4].value + stats[6].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "drive";
    standard_skill.value = stats[3].value + stats[2].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "endurance";
    standard_skill.value = stats[1].value + stats[1].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "evade";
    standard_skill.value = stats[2].value + stats[2].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "first aid";
    standard_skill.value = stats[6].value + stats[2].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "influence";
    standard_skill.value = stats[4].value + stats[4].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "insight";
    standard_skill.value = stats[6].value + stats[3].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "locale";
    standard_skill.value = stats[6].value + stats[6].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "native tongue";
    standard_skill.value = stats[6].value + stats[4].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "perception";
    standard_skill.value = stats[6].value + stats[3].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "ride";
    standard_skill.value = stats[3].value + stats[2].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "sing";
    standard_skill.value = stats[3].value + stats[4].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "stealth";
    standard_skill.value = stats[6].value + stats[2].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "swim";
    standard_skill.value = stats[0].value + stats[1].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "unarmed";
    standard_skill.value = stats[0].value + stats[2].value;
    standard_skills.push_back(standard_skill);
    standard_skill.name = "willpower";
    standard_skill.value = stats[3].value + stats[3].value;
    standard_skills.push_back(standard_skill);



    cout << "hova mentsem az adatokat?";
    string kifilename;
    cin >> kifilename;

    ofstream myfile;
    myfile.open (kifilename.c_str());

    for(int i = 0; i < stats.size(); i++){
        myfile << stats[i].name << " " << stats[i].value << endl;
    }
    for(int i = 0; i < standard_skills.size(); i++){
        myfile << standard_skills[i].name << " " << standard_skills[i].value << endl;
    }

    myfile.close();

    return 0;
}
