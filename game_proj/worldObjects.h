#include "includers.h"

using namespace std;
//The map elements
char ball = '*';//Your golf ball
char hole = '#';
char O_O_B = 'H';//Out of bounds area (should surround area)
char diagWallF = '/';
char diagWallB = '\\';//The backslash is an escape character, so it needs to be escaped
std::string vertWall = "||";//It is a double to distinguish it from the direction selector
char horizWall = '_';
//end of map elements