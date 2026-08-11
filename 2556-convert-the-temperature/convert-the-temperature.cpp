class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin=celsius+273.1500;
        double fah=celsius*1.80+32.0000;
        return {kelvin,fah};
        
    }
};