#pragma once

#include <stdint.h>
#include <vector>

typedef enum{
    LOW = 0,
    HIGH = 1,
    UNDEFINED = -1,
}LogicValue_t;

class IComponent
{
public:
    virtual void evaluate(void) = 0;


    void setInput(uint32_t index, LogicValue_t value) const {};
    LogicValue_t getInput(uint32_t index) const {};

    LogicValue_t getOutput(uint32_t index) const {};
    
protected:
    std::vector<LogicValue_t> inputs;
    std::vector<LogicValue_t> outputs;
};