//
// Created by Jacob Vazquez on 3/26/24.
//

#ifndef OFFICEBUILDING_FLOOR_H
#define OFFICEBUILDING_FLOOR_H
class Office;
class Floor
{
private:
    int floorNum;
    Office* office[99];

public:
    Floor(int,Office*);
    ~Floor();
};



#endif //OFFICEBUILDING_FLOOR_H
