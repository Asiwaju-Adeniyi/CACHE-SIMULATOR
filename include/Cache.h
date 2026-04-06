#pragma once 

#include "MainMemory.h"
#include "ReplacementAlgo.h"

const uint8_t MEM_ADD_SIZE = 32;
const uint8_t CACHE_LINE_SIZE = 64;
const uint8_t CACHE_SETS = 64;
const uint8_t CACHE_WAYS = 4;

const uint8_t CACHE_LINE_BYTE_OFFSET_SIZE = 6;
const uint8_t CACHE_LINE_SET_INDEX_SIZE = 6;
const uint8_t CACHE_LINE_TAG_SIZE = 20 ;

struct CacheLine{
    uint32_t tag = 0;
    std::array<uint8_t, CACHE_LINE_SIZE> data;
    bool valid = false;
};

struct AddressParts{
    uint32_t tag;
    uint8_t setIndex;
    uint8_t byteOffset;

    AddressParts(uint32_t address) {
        byteOffset = address & (CACHE_LINE_SIZE - 1);
        setIndex = (address >> CACHE_LINE_BYTE_OFFSET_SIZE) & ((1 << CACHE_LINE_SET_INDEX_SIZE) - 1);
        tag = address >> (CACHE_LINE_BYTE_OFFSET_SIZE + CACHE_LINE_SET_INDEX_SIZE);
    }
};

class Cache{};