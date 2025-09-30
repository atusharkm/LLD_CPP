#include<iostream>
#include "/Users/tusharmishra/Coding/Base_C++/OOPS/Tot_02.h"
using namespace std;

void Vehicle::setDetails(string vehName, string model, string regNum, int year, int wheelCnt)
{
    VehicleName = vehName;
    Model = model;
    RegistrationNumber = regNum;
    YearOfManufacture = year;
    WheelCount = wheelCnt;
}

void Vehicle::BSEmissions()
{
    if(YearOfManufacture >= 2021)
    {
        cout<<"BSVI"<<endl;
    }
    else
    {
        cout<<"Old BS Emissions Standards Rating"<<endl;
    }
}

void Vehicle::getDetails()
{
    cout<<"Vehicle Name: "<<VehicleName<<endl;
    cout<<"Model: "<<Model<<endl;
    cout<<"Registration Number: "<<RegistrationNumber<<endl;
    cout<<"Year of Manufacture: "<<YearOfManufacture<<endl;
    cout<<"Wheels in vehicle: "<<WheelCount<<endl;
    cout<<"Color: "<<Color<<endl;
    cout<<"Tyre Size: "<<TyreSize<<endl;
    cout<<"Transmission Type: "<<TransmissionType<<endl;
}

int main()
{
    Vehicle Mahindra, Royal_Enfield;
    Mahindra.setDetails("XEV 9E","3Pack", "MH12AB1234", 2025, 4);
    Mahindra.Color = "White";
    Mahindra.TyreSize = "19 inch";
    Mahindra.TransmissionType = "Automatic";

    Royal_Enfield.setDetails("Hunter 350", "Classic 350", "MH12XY9876", 2025, 2);
    Royal_Enfield.Color = "Blue";
    Royal_Enfield.TyreSize = "17 inch";
    Royal_Enfield.TransmissionType = "Manual";

    cout<<"Details of Vehicle 1: "<<endl;
    Mahindra.getDetails();
    Mahindra.BSEmissions();

    cout<<"\nDetails of Vehicle 2: "<<endl;
    Royal_Enfield.getDetails();
    Royal_Enfield.BSEmissions();
    return 0;
}