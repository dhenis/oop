#ifndef ARENA_H
#define	ARENA_H

class Arena {
public:

    void printTerrain();
    void setDefaultTerrain();
    void setLeftTopCorner(int a, int b, int c, int d,int e);
    void setRightTopCorner(int a, int b, int c, int d, int e);
    void setBottomLeftCorner(int a, int b, int c, int d , int e);
    void setBottomRightCorner(int a, int b, int c, int d , int e);
    void setSquare(int nodex,int nodey,int value);
    void setZero();
    void setTerrain();
    void setCursor(int inX , int inY);
    void setCursorAfterShoot(int inX , int inY);
    int getTerrainValue(int inX , int inY);

    Arena();
    virtual ~Arena();


private:

  int terrain[19][19];

};
#endif
