#ifndef BLOOD_BANK_MANEGMENT_SYSTEM_BLOODUNIT_H
#define BLOOD_BANK_MANEGMENT_SYSTEM_BLOODUNIT_H
#include <string>
class BloodUnit {
private:
    std::string bloodType;
    int quantity; // in milliliters
    std::string date;
public:
    BloodUnit(const std::string &bloodType, int quantity, const std::string &date)
            : bloodType(bloodType), quantity(quantity), date(date) {}

    const std::string &getBloodType() const {
        return bloodType;
    }

    int getQuantity() const {
        return quantity;
    }

    const std::string &getDate() const {
        return date;
    }
};

#endif //BLOOD_BANK_MANEGMENT_SYSTEM_BLOODUNIT_H
