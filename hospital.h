#ifndef hospital_H
#define hospital_H

#include <string>

class Hospital {
private:
    std::string name, address, phone;
    int id;
    static int count;

public:
    Hospital();

    void setName(const std::string& name);
    std::string getName() const;

    void setAddress(const std::string& address);
    std::string getAddress() const;

    void setPhone(const std::string& phone);
    std::string getPhone() const;

    static int getCount();
    int getId() ;
};

#endif // HOSPITAL_H

