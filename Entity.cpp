#include <iostream>

class Entity{
const char* name;
int x, y;

    public:

    Entity() : x(0), y(0), name("Default_Entity_Name") {} //Default constructor;

    Entity(int PosX, int PosY, const char* EntityName){ // Constructor setting X, Y, Name
        x = PosX;
        y = PosY;
        name = EntityName;
    }

    int getX(){
        return x;
    }
    
    int getY(){
        return y;
    }

    const char* getName(){
        return name;
    }

};

class Player : public Entity {
    int id;


public:

    Player() : id(00000000) {}

    Player(int idp)
    : id(idp){};

    int getID(){
        return id;
    }

    void setID(int setID){
        id = setID;
    }

};

int main(){
    Entity* e = new Entity(2,5,"Player 1");
    //Player* player = new Player();
    Player player(7777);
    {
        Entity e2;
        std::cout << "Entity 1 : "<< e->getName() << " : X  " << e->getX() << " : Y " << e->getY() << std::endl;
        std::cout << "Entity 2 : " << e2.getName()  << " : X " << e2.getX() << " : Y " << e2.getY() << std::endl;
    } // End of life for Entity 2 (e2) (End of scope { in these })
    //player.setID(23984);
    std::cout << player.getID() << std::endl;

    delete e; //Manually Deleting Entity 1 created on the heap (e)
}

