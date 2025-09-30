#include <iostream>
#include <string>

class Vehicle
{
private:
    std::string VehicleName, Model, RegistrationNumber;
    int YearOfManufacture, WheelCount;

public:
    std::string Color, TyreSize, TransmissionType;

    Vehicle() = default;
    ~Vehicle() = default;

    virtual void setDetails(std::string vehName, std::string model, std::string regNum, int year, int wheelcnt);
    virtual void getDetails();
    virtual void BSEmissions();
};
