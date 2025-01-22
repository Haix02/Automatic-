#ifndef ENCRYPTOR_H
#define ENCRYPTOR_H

#include <string>

class Encryptor {
public:
    // Encrypt data
    static std::string encrypt(const std::string &data);

    // Decrypt data
    static std::string decrypt(const std::string &data);
};

#endif // ENCRYPTOR_H
