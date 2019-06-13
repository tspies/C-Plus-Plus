#include <iostream>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

std::string randomString(void)
{
    std::string string;
    static char charArray[] = "abcdefghijklmnopqrstuvwxyz"
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                "1234567890";

    for (int i = 0; i < 8; i++)
        string += charArray[rand() % sizeof(charArray)];
    return (string);
}

int randomNum(void)
{
    return (rand() % 100);
}
Data *initStruct()
{
    srand(time(0));
    Data *dataStruct = new Data;
    dataStruct->s1 = randomString();
    dataStruct->s2 = randomString();
    dataStruct->n = randomNum();
    return (dataStruct);
}
void *serialize(void)
{
    Data *newData = initStruct();
    void *serial = reinterpret_cast<void *>(newData);
    return (serial);
}
Data *deserialize(void *raw)
{
    Data *deserial = reinterpret_cast<Data *>(raw);
    return (deserial);
}

int main(void)
{
    void *serialData = serialize(); 
    Data *deserialData = deserialize(serialData);

    std::cout << "String 1: " << deserialData->s1 << std::endl;
    std::cout << "String 2: " << deserialData->s2 << std::endl;
    std::cout << "Number: " << deserialData->n << std::endl;
    delete deserialData;
    return 0;
}