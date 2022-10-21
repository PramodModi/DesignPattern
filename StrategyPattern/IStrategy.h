#pragma once

class IStrategy{
    public: 
        virtual int execute(int a, int b)=0;
        virtual ~IStrategy() {}

};