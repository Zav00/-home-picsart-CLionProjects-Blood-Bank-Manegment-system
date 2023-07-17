#ifndef BLOOD_BANK_MANEGMENT_SYSTEM_DONOR_H
#define BLOOD_BANK_MANEGMENT_SYSTEM_DONOR_H
#include <string>
class Donor {
private:
    std::string name;
    std::string contactInfo;
    std::string bloodType;
public:

    Donor(const std::string &name, const std::string &contactInfo, const std::string &bloodType)
            : name(name), contactInfo(contactInfo), bloodType(bloodType) {}

    const std::string &getName() const {
        return name;
    }

    const std::string &getContactInfo() const {
        return contactInfo;
    }

    const std::string &getBloodType() const {
        return bloodType;
    }

};
#endif //BLOOD_BANK_MANEGMENT_SYSTEM_DONOR_H
