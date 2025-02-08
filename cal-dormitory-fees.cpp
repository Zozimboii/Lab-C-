#include <iostream>
#include <iomanip>
using namespace std;
class Sumrent{
    
    public:
        string room;
        float roomCost,eUnit,eCost,wUnit,wCost,allCost;
        void setRoom(float elec,float water){
                room = "Room Fan";
                roomCost = 2500;
                eUnit = elec;
                wUnit = water; 
        };
        void sumCost(){ 
                eCost = 15;
                wCost = 30;
                allCost = roomCost + (eUnit * eCost) + (wUnit*wCost);
                cout << room << " Pay all = "<<allCost <<"  bath\n"<< endl;
                cout<<"-------------------------------------------"<<endl;
        }
        
};

class Roomair : public Sumrent{
        public :
            void setRoom(float elec,float water){
                room = "Room Air";
                roomCost = 3500;
                eUnit = elec;
                wUnit = water; 
        }
}; 

class Roomvip : public Sumrent{
        public :
            void setRoom(float elec,float water){
            room = "Room Vip";
            roomCost = 10000;
            eUnit = elec;
            wUnit = water; 
        }
};

int main( ) {
    Sumrent fan;
    Roomair air;
    Roomvip vip;
    
    float water,elec;
    int select;
    
    while(true){
        cout<<"\tCalculate dormitory fees ABC\n"<<endl;
        cout<<"press 1 to Fan Room"<<endl;
        cout<<"press 2 to Air Room"<<endl;
        cout<<"press 3 to Vip Room"<<endl;
        cout<<"press 0 to Exit"<<endl;
        cout<<"select : ";
        cin>>select;
        
        if(select == 1){
            cout << "Amount of electricity used : ";
            cin >> elec;
            cout << "Amount of water used : ";
            cin >> water;
            fan.setRoom(elec,water);
            fan.sumCost();
        }
        
        else if(select == 2){
            cout << "Amount of electricity used : ";
            cin >> elec;
            cout << "Amount of water used : ";
            cin >> water;
            air.setRoom(elec,water);
            air.sumCost();
        }
        
        else if(select == 3){
            cout << "Amount of electricity used : ";
            cin >> elec;
            cout << "Amount of water used : ";
            cin >> water;
            vip.setRoom(elec,water);
            vip.sumCost();
        }
        
        else if(select == 0){
            break;
        }
        
        else {
            cout<<"Please press choice";
        }
        
        
    }
    
    
}

/*class Fanroom : public Sum_rent{
        public :
        string roomName;
        float roomCost,electricUnit,electricCost,waterUnit,waterCost,allCost;
        void setRoom(float eUnit,float wUnit){
                roomName = "ห้องพัดลม";
                roomCost = 2500;
                electricUnit = eUnit;
                waterUnit = wUnit; 
};   
                
class Airroom : public Sum_rent{
        public :
            void setRoom(float eUnit,float wUnit){
                roomName = "ห้องแอร์";
                roomCost = 3500;
                electricUnit = eUnit;
                waterUnit = wUnit; 
            }
};

class Viproom : public Sum_rent{
        public :
            void setRoom(float eUnit,float wUnit){
            roomName = "ห้อง Vip";
            roomCost = 10000;
            electricUnit = eUnit;
            waterUnit = wUnit; 
            }
};



else if(select == 2){
            cout << "จำนวนไฟฟ้าที่ใช้ (Unit) : ";
            cin >> elec;
            cout << "จำนวนน้ำที่ใช้ (Unit) : ";
            cin >> water;
            air.setRoom(elec,water);
            air.sumCost();
        }
        else if(select == 3){
            cout << "จำนวนไฟฟ้าที่ใช้ (Unit) : ";
            cin >> elec;
            cout << "จำนวนน้ำที่ใช้ (Unit) : ";
            cin >> water;
            vip.setRoom(elec,water);
            vip.sumCost();
        }
*/
