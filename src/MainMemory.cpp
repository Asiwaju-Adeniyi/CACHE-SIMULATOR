#include "MainMemory.h"
#include <array> 


   
    MainMem::MainMem(){
        memory = std::make_unique<std::array<uint8_t, MAIN_MEM_SIZE>>();

        memory.get() -> fill(0x00);
    };
    MainMem::~MainMem(){};

    void MainMem::Read(uint32_t startAdd, uint8_t size, uint8_t* dst){
        std::memcpy(dst, &memory.get()->at(startAdd), size);
    };
    void MainMem::Write(uint32_t startAdd, uint8_t size, uint8_t* dst){
        std::memcpy(&memory.get()->at(startAdd), dst, size);
    };
    void MainMem::Print(){};


