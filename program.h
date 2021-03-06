#ifndef PROGRAM_H
#define PROGRAM_H

#include "stdlib.h"

union value {
    uint8_t raw[4];
    uint8_t u8;
    uint16_t u16;
    int32_t i32;
    uint32_t u32;
};

static const int PROGRAM_MAX_SIZE = 65536;

extern uint8_t program[PROGRAM_MAX_SIZE];

union value get_integer(uint16_t position, uint8_t size);

#endif /* end of include guard: PROGRAM_H */
