#ifndef RELAY_TYPES_H
#define RELAY_TYPES_H

#include <string.h>

struct s_action
{
    char m_name[64];
    unsigned int m_command;
};

typedef struct s_action t_action;
#endif // RELAY_TYPES_H
