cmake_minimum_required(VERSION 3.10)
project(Kursach4sem)

set(CMAKE_CXX_STANDARD 11)

add_executable(Kursach4sem main.cpp Modules/CpuInfo.cpp Modules/SystemInfo.cpp Modules/PciInfo.cpp Modules/MemoryInfo.cpp Modules/HddInfo.cpp Modules/HardwareInfo.cpp Headers/HardwareInfo.h Headers/SystemInfo.h Headers/PciInfo.h Headers/MemoryInfo.h Headers/HddInfo.h Headers/CpuInfo.h Modules/ComputerPart.cpp Headers/ComputerPart.h)
