#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>

struct Data{
   int value;
};
class  Serializer{
   private:
    Serializer();

    public:
    Serializer(const Serializer &oobj);
    Serializer &operator=(const Serializer &oobj);
    ~Serializer();
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};
#endif