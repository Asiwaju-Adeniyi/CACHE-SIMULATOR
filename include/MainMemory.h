#pragma once
#include <cstdint>
#include <memory>

const uint32_t MAIN_MEM_SIZE = 4 * 1024 * 1024;

class MainMem{

    public: 
    MainMem();
    ~MainMem();

    void Read(uint32_t startAdd, uint8_t size, uint8_t* dst);
    void Write(uint32_t startAdd, uint8_t size, uint8_t* dst);
    void Print();


    private: 
    std::unique_ptr<std::array<uint8_t, MAIN_MEM_SIZE>> memory;


      
};