#include "MainMemory.h"
#include <array> 
#include <iostream> 
#include <string> 
#include <format> 
   
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

    void MainMem::Print(){
        const uint32_t rows = 24;
        const uint8_t cols = 12;

        for (uint32_t row = 0; row < rows; row++) {
            for (uint8_t col = 0; col < cols; col++) {
              std::string val = std::format("0x{:x}\t", memory.get()->at(row * cols + col));

              std::cout << val;
            }
              std::cout << std::endl;
        }

            std::cout << std::endl;
            for (uint32_t dash = 0; dash < 80; dash++) {
                std::cout << "-";
            }

            std::cout << std::endl;
    };


