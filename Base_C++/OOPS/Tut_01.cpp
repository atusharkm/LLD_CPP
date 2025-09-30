#include<iostream>
using namespace std;

class Vehicle
{
    private:
        string VehicleName, Model, RegistrationNumber;
        int YearOfManufacture;
    public:

        string Color, TyreSize, TransmissionType;
        void setDetails(string vehName,string model, string regNum, int year); // Only declaration

        void getDetails()
        {
            cout<<"Vehicle Name: "<<VehicleName<<endl;
            cout<<"Model: "<<Model<<endl;
            cout<<"Registration Number: "<<RegistrationNumber<<endl;
            cout<<"Year of Manufacture: "<<YearOfManufacture<<endl;
            cout<<"Color: "<<Color<<endl;
            cout<<"Tyre Size: "<<TyreSize<<endl;
            cout<<"Transmission Type: "<<TransmissionType<<endl;
        }
};

void Vehicle :: setDetails(string vehName, string model, string regNum, int year) // Definition
{
    VehicleName = vehName;
    Model = model;
    RegistrationNumber = regNum;
    YearOfManufacture = year;
}

int main()
{
    Vehicle Mahindra, Royal_Enfield;
    Mahindra.setDetails("XEV 9E","3Pack", "MH12AB1234", 2025);
    Mahindra.Color = "White";
    Mahindra.TyreSize = "19 inch";
    Mahindra.TransmissionType = "Automatic";

    Royal_Enfield.setDetails("Hunter 350", "Classic 350", "MH12XY9876", 2025);
    Royal_Enfield.Color = "Blue";
    Royal_Enfield.TyreSize = "17 inch";
    Royal_Enfield.TransmissionType = "Manual";

    cout<<"Details of Vehicle 1: "<<endl;
    Mahindra.getDetails();

    cout<<"\nDetails of Vehicle 2: "<<endl;
    Royal_Enfield.getDetails();
    return 0;
}