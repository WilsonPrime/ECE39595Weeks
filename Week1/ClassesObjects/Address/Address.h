#ifndef ADDRESS_H_
#define ADDRESS_H_

#include <string>

class Address {
private:
   std::string street;
   std::string city;
   std::string state;
   std::string postalCode;
   std::string country = "USA";

public:
   Address(std::string _street, std::string _city, std::string _state, std::string _postalCode);
   Address(std::string _street, std::string _city, std::string _state, std::string _postalCode, std::string _country);
   std::string toString( );

   std::string getStreet( );
   void setStreet(std::string _street);

   std::string getCity( );
   void setCity(std::string _city);

   void setState(std::string _state);
   std::string getState( );

   void setPostalCode(std::string _postalCode);
   std::string getPostalCode( );

   void setCountry(std::string _country);
   std::string getCountry( );
};
#endif /* ADDRESS_H_ */