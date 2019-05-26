#ifndef CPU_H_
#define CPU_H_

#define RAM_SIZE 65536

class Cpu {

public:

    Cpu();
    ~Cpu();

    unsigned int executeOneInstruction();
    void debugRegisters();

private:

    unsigned int pc;
    unsigned int sp;
    unsigned int statusN;
    unsigned int statusV;
    unsigned int statusB;
    unsigned int statusD;
    unsigned int statusI;
    unsigned int statusZ;
    unsigned int statusC;


    unsigned int a;
    unsigned int x;
    unsigned int y;

    unsigned int ram[RAM_SIZE];

    unsigned int getStatus();
};

#endif
