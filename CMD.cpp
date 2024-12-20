//
// Created by Correia, Jose Bastos on 03/12/2024.
//

#include <sstream>
#include <map>

#include "CMD.h"



CMD stringToCMD(const std::string& command) {
    static const std::map<std::string, CMD> commandMap = {
        {"play", Play},
        {"move", Move},
        {"quit", Quit}
    };

    auto it = commandMap.find(command);
    return (it != commandMap.end()) ? it->second : Unknown;
}

/* BOT
* enum class CMD {
Show,
Move,
Quit,
Unknown // Comando desconhecido para erros
};

// Função para mapear strings para valores do enum
CMD stringToCMD(const std::string& command) {
static const std::unordered_map<std::string, CMD> commandMap = {
{"show", CMD::Show},
{"move", CMD::Move},
{"quit", CMD::Quit}
};

auto it = commandMap.find(command);
return (it != commandMap.end()) ? it->second : CMD::Unknown;
}
*/