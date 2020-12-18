class ParkingSystem {
public:
    vector<int> t;

    ParkingSystem(int big, int medium, int small) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        t={big, medium, small};
    }
    
    bool addCar(int carType) {
        return t[carType-1]-->0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
