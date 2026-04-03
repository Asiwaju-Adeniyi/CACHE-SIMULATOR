# CPU Cache Simulator (C++)

A C++ implementation of a CPU cache simulator modeling a 32-bit memory system.

## Overview

- 4MB main memory  
- 16KB cache  
  - 4-way set-associative  
  - 64 sets  
- Write-through policy  
- Random replacement algorithm  

## Design

- Models a basic memory hierarchy: Processor → Cache → Main Memory  
- Cache and main memory are abstracted behind a unified memory system interface  
- Processor accesses memory without awareness of underlying storage  

## Functionality

- Read and write operations  
- Basic validation tests  
- Cache thrashing simulation  

## Notes

This project provides a foundational framework for experimenting with cache behavior and can be extended with more advanced policies and performance analysis.