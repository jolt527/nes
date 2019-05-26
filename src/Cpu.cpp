#include "Cpu.h"
#include <cstring>
#include <iostream>
#include <iomanip>

using namespace std;

Cpu::Cpu() {
    pc = 0x00;
    sp = 0xFF;

    statusN = 0;
    statusV = 0;
    statusB = 0;
    statusD = 0;
    statusI = 1;
    statusZ = 0;
    statusC = 0;

    a = 0x00;
    x = 0x00;
    y = 0x00;

    memset(ram, 0x00, sizeof(ram) / sizeof(unsigned int));
}

Cpu::~Cpu() {
    // nothing for now
}

unsigned int Cpu::getStatus() {
    return
        (statusN << 7) |
        (statusV << 6) |
        (1 << 5) |
        (statusB << 4) |
        (statusD << 3) |
        (statusI << 2) |
        (statusZ << 1) |
        statusC
    ;
}

unsigned int Cpu::executeOneInstruction() {
    //TODO implement this!!!
    return 0;
}

void Cpu::debugRegisters() {
    cout << hex << uppercase;
    cout << "PC = $" << setfill('0') << setw(2) << pc << endl;
    cout << "SP = $" << setfill('0') << setw(2) << sp << endl;
    cout << " P = $" << setfill('0') << setw(2) << getStatus() << endl;
    cout << " A = $" << setfill('0') << setw(2) << a << endl;
    cout << " X = $" << setfill('0') << setw(2) << x << endl;
    cout << " Y = $" << setfill('0') << setw(2) << y << endl;
    cout << dec << nouppercase;
}
