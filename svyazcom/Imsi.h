#pragma once
#include "iostream"
#include "Models.h"
class Imsi : public Version {

private:
    std::string s_imsi;
    std::string e_imsi;
    unsigned int tap_code_id;
    unsigned int filial_id;
    unsigned int imsi_region;

public:
    Imsi() : tap_code_id(0), filial_id(0), imsi_region(0) {}

    std::string toString() const override {
        std::string base_string = Version::toString();

        std::string imsi_string = " s_imsi: " + s_imsi + " e_imsi : " + e_imsi +
            " tap_code_id: " + std::to_string(tap_code_id) +
            " filial_id: " + std::to_string(filial_id) +
            " imsi_region: " + std::to_string(imsi_region);

        return " ObjectName: Imsi " + base_string + imsi_string;
    };

    const std::string& getS_imsi() const { return s_imsi; }
    void setS_imsi(const std::string& value) { s_imsi = value; }

    const std::string& getE_imsi() const { return e_imsi; }
    void setE_imsi(const std::string& value) { e_imsi = value; }

    unsigned int getTap_code_id() const { return tap_code_id; }
    void setTap_code_id(unsigned int value) { tap_code_id = value; }

    unsigned int getFilial_id() const { return filial_id; }
    void setFilial_id(unsigned int value) { filial_id = value; }

    const unsigned int getImsi_region() const { return imsi_region; }
    void setImsi_region(const unsigned int value) { imsi_region = value; }
};
