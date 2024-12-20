//
// Created by Correia, Jose Bastos on 03/12/2024.
//

#ifndef CMD_H
#define CMD_H

#include <map>
using namespace std;

enum CMD {
    Play,
    Move,
    Quit,
    Unknown
};

CMD stringToCMD(const string & cmdStr);

#endif // CMD_H