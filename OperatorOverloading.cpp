#include <iostream>

struct Vector2{
    float x,y;
    Vector2(float x, float y)
        : x(x),y(y) {}

    Vector2 Add(const Vector2& other) const
    {
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 operator+(const Vector2& other) const
    {
        return Add(other);
    }

};

std::ostream& operator<<(std::ostream& stream, const Vector2& other){
    stream << other.x << " : " << other.y;
    return stream;
}

int main(){
    Vector2 position(5.5f, 4.3f);
    Vector2 position2(9.4f, 7.4f);

    Vector2 result = position + position2;
    
    std::cout << result << std::endl;
}

//Notes: 
//Operators are just functions.
//Just because you can, dont make your code look weird.